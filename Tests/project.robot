*** Settings ***
Library  String
Library  OperatingSystem
Library  Process
Library  NewOrderTrans.py
Library  AcceptOrderTrans.py
Library  GetActiveChildCount.py

*** Variables ***
${loc}  nagpur
${destuser}  dumyUser
${PATH}  D:\\1.txt
${BATCH}  D:\\1.bat


*** Test Cases ***
FirstTestCase
    ${str1} =	convert to lowercase  ${loc}
    Should Be Equal	${str1}	nagpur


SecondTestCase
    create file  ${PATH}  ${loc} ${destuser}}
    file should exist  ${PATH}

ThirdTestCase
    create file  ${BATCH}
    run  ${BATCH}

create Ada Parent
    ${ParentOrderID} =   NewOrderTrans
    ${GetActiveChildCount} =  GetActiveChildCount
    should be equal  ${GetActiveChildCount}  GetActiveChildCount
    ##should be equal  ${GetActiveChildCount}  GetActiveChildCount
