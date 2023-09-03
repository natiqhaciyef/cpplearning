#include "iostream"

using namespace std;

#ifndef CPPLEARNING_PHPFILECREATOR_H
#define CPPLEARNING_PHPFILECREATOR_H

class PhpInsertFileCreator {
private:
    string phpMajorTemplate = "";

    string phpTemplateFront1 = "<?php\n"
                               "$response = array();\n$key = isset($_GET['apiKey']) ? $_GET['apiKey'] : '';\n"
                               "\n"
                               "if($key == \"30e171ab-3e37-4a9e-b146-5965922caf97\"){\n"
                               "if (){";
    string phpTemplateFront2 =
            "    \n require_once __DIR__ . '/db_config.php';\n"
            "    \n"
            "    $baglanti = mysqli_connect(DB_SERVER, DB_USER, DB_PASSWORD, DB_DATABASE);\n"
            "    \n"
            "    \n"
            "    if (!$baglanti) {\n"
            "        die(\"Connection fail : \" . mysqli_connect_error());\n"
            "    }\n"
            "    \n";

    string phpTemplateBack = "\n"
                             "\n"
                             "    if (mysqli_query($baglanti, $sqlsorgu)) {\n"
                             "        $response[\"success\"] = 1;\n"
                             "        $response[\"message\"] = \"successfully \";\n"
                             "        echo json_encode($response);\n"
                             "    } else {\n"
                             "        $response[\"success\"] = 0;\n"
                             "        $response[\"message\"] = \"No product found\";\n"
                             "        echo json_encode($response);\n"
                             "    }\n"
                             "    \n"
                             "    mysqli_close($baglanti);\n"
                             "} else {\n"
                             "    $response[\"success\"] = 0;\n"
                             "    $response[\"message\"] = \"Required field(s) is missing\";\n"
                             "    echo json_encode($response);\n"
                             "}\n"
                             "}else{\n"
                             "    $response[\"success\"] = 0;\n"
                             "    $response[\"message\"] = \"Required api key is missing\";\n"
                             "    echo json_encode($response);\n"
                             "}\n"
                             "?>";


public:
    string tableName = "";

    string parametersCondition = "";
    string parameterQueue = "";

    string sqlQueryFront = "";
    string sqlQueryBack = "";


    PhpInsertFileCreator(string tableName) {
        this->tableName = tableName;
    }

    void addParameter(string parameterName) {

        if (parametersCondition.empty()) {
            parametersCondition += "if(";
            parametersCondition += "isset($_POST[\"";
            parametersCondition += parameterName;
            parametersCondition += "\"]){";


            sqlQueryFront += "INSERT INTO ";
            sqlQueryFront += tableName;
            sqlQueryFront += " (";
            sqlQueryFront += parameterName;
            sqlQueryFront += ")";

            sqlQueryBack += " VALUES ('$";
            sqlQueryBack += parameterName;
            sqlQueryBack += "')";

        } else {
            parametersCondition = removeSuffix(parametersCondition,"){");
            parametersCondition += " && ";
            parametersCondition += "isset($_POST[\"";
            parametersCondition += parameterName;
            parametersCondition += "\"]){";

            string suffixQueryFront = ")";
            sqlQueryFront = removeSuffix(sqlQueryFront, suffixQueryFront);
            sqlQueryFront += ",";
            sqlQueryFront += parameterName;
            sqlQueryFront += ")";

            string suffixQueryBack = ")";
            sqlQueryBack = removeSuffix(sqlQueryBack, suffixQueryBack);
            sqlQueryBack += ",";
            sqlQueryBack += "'$";
            sqlQueryBack += parameterName;
            sqlQueryBack += "')";

        }

        parameterQueue += "$";
        parameterQueue += parameterName;
        parameterQueue += " = $_POST[\"";
        parameterQueue += parameterName;
        parameterQueue += "\"];\n";
    }

    string removeSuffix(const string &str, const string &suffix) {
        if (str.size() >= suffix.size() && str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0) {
            return str.substr(0, str.size() - suffix.size());
        }
        return str;
    }

    string createFile(){
        phpTemplateFront1 = removeSuffix(phpTemplateFront1, "if (){");
        phpTemplateFront1 += parametersCondition;
        phpTemplateFront1 += "\n";
        phpTemplateFront1 += "\n";

        string temp = phpTemplateFront2;
        phpTemplateFront2 = parameterQueue;
        phpTemplateFront2 += temp;

        phpTemplateFront2 += "$sqlsorgu = \"";
        phpTemplateFront2 += sqlQueryFront;
        phpTemplateFront2 += sqlQueryBack;
        phpTemplateFront2 += "\";";

        phpMajorTemplate += phpTemplateFront1;
        phpMajorTemplate += phpTemplateFront2;
        phpMajorTemplate += phpTemplateBack;
        return phpMajorTemplate;
    }
};


#endif //CPPLEARNING_PHPFILECREATOR_H
