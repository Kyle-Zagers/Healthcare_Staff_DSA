#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include "Position.h"
#include "Heap.h"
#include "Nurse.h"
using std::vector;
using std::cout;
using std::endl;
using std::string;


void menu(){
    std::cout << "Main Menu:" << std:: endl;
    std::cout << "1. input available nurses" << std::endl;
    std::cout << "2. Show list of available positions" << std::endl;
    std::cout << "3. Show priority of position" << std::endl;
    std::cout << "4. Show list of nursing assignments" << std::endl;
    std::cout << "5. Reset list of available nurses" << std::endl;
    std::cout << "6. Stop Execution" << std::endl;
    std::cout << "7. Input number of random positions" << std::endl;
    std::cout << "8. Input number of random nurses" << std::endl;

}

vector<string> nurseInput() {
    vector<string> nurses;
    string name, names;

        cout << "Please enter nurses' names: \n";
        nurses.push_back("");
        std::cin >> nurses[0];
        std::getline(std::cin, names);

        std::stringstream stream(names);
            
        getline(stream, name, ',');
        nurses[0] += name;
        nurses.push_back("");

        for (int i=1; getline(stream, name, ','); i++) {
            nurses[i] = name.substr(1);
            nurses.push_back("");
        }
        return nurses;
}

vector<Position> randomPositions(int num) {
    vector<string> positions = {"Registered Nurse", "Licensed Practical Nurse", "Certified Nursing Assistant", "Nurse Practitioner", "Clinical Nurse Specialist", "Certified Registered Nurse Anesthetist", "Operating Room Nurse", "Pediatric Nurse", "Neonatal Intensive Care Unit Nurse", "Emergency Room Nurse", "Intensive Care Unit Nurse", "Cardiac Care Nurse", "Medical-Surgical Nurse", "Telemetry Nurse", "Geriatric Nurse", "Psychiatric Nurse", "Oncology Nurse", "Orthopedic Nurse", "Rehabilitation Nurse", "Home Health Nurse", "Hospice Nurse", "Dialysis Nurse", "Labor and Delivery Nurse", "Obstetric Nurse", "Postpartum Nurse", "Perioperative Nurse", "Ambulatory Care Nurse", "Wound Care Nurse", "Infection Control Nurse", "Pain Management Nurse", "Forensic Nurse", "School Nurse", "Public Health Nurse", "Nurse Educator", "Nurse Administrator", "Case Manager Nurse", "Telehealth Nurse", "Occupational Health Nurse", "Travel Nurse", "Clinical Research Nurse", "Infusion Nurse", "Radiology Nurse", "Flight Nurse", "Military Nurse", "Correctional Nurse", "Ambulance Nurse", "Holistic Nurse", "Plastic Surgery Nurse", "Burn Care Nurse", "Gastroenterology Nurse", "Allergy and Immunology Nurse", "Genetics Nurse", "Rheumatology Nurse", "Nephrology Nurse", "Neuroscience Nurse", "Pulmonary Nurse", "Ophthalmic Nurse", "Endocrinology Nurse", "Hematology Nurse", "Urology Nurse", "Gynecology Nurse", "Dermatology Nurse", "ENT Nurse", "Oncology Infusion Nurse", "Interventional Radiology Nurse", "Cardiac Catheterization Lab Nurse", "Vascular Nurse", "Palliative Care Nurse", "Cardiovascular Operating Room Nurse", "Perianesthesia Nurse", "Ambulatory Surgery Nurse", "Nurse Manager", "Charge Nurse", "Clinical Nurse Leader", "Nurse Researcher", "Nurse Informaticist", "Legal Nurse Consultant", "Nurse Auditor", "Nurse Advocate", "Infectious Disease Nurse", "Emergency Department Nurse", "Outpatient Nurse", "PACU Nurse", "Quality Improvement Nurse", "Health Policy Nurse", "Gerontological Nurse Practitioner", "Acute Care Nurse Practitioner", "Family Nurse Practitioner", "Women's Health Nurse Practitioner", "Pediatric Nurse Practitioner", "Psychiatric-Mental Health Nurse Practitioner", "Neonatal Nurse Practitioner", "Adult-Gerontology Nurse Practitioner", "Oncology Nurse Practitioner", "Orthopedic Nurse Practitioner", "Nurse Midwife", "Holistic Nurse Practitioner", "Nurse Anesthetist", "Dermatology Nurse Practitioner", "Gastroenterology Nurse Practitioner", "Urology Nurse Practitioner", "Nephrology Nurse Practitioner", "Cardiology Nurse Practitioner", "Pulmonary Nurse Practitioner", "Endocrinology Nurse Practitioner", "Allergy and Immunology Nurse Practitioner", "Rheumatology Nurse Practitioner", "Neurology Nurse Practitioner", "Hematology Nurse Practitioner", "Ophthalmology Nurse Practitioner", "Pain Management Nurse Practitioner", "Critical Care Nurse Practitioner", "Telehealth Nurse Practitioner", "Clinical Nurse Educator", "Simulation Nurse Educator", "Nursing Informatics Specialist", "Palliative Care Nurse Practitioner", "Community Health Nurse", "Nurse Navigator", "Inpatient Nurse", "Outpatient Nurse", "Surgical Nurse", "Perioperative Services Nurse", "Preoperative Nurse", "Postoperative Nurse", "Perianesthesia Nurse", "Recovery Room Nurse", "Circulating Nurse", "Scrub Nurse", "Trauma Nurse", "Emergency Medical Services Nurse", "Flight Nurse", "Paramedic Nurse", "Occupational Health Nurse", "Infection Control Nurse", "Employee Health Nurse", "Corporate Health Nurse", "School Nurse", "Camp Nurse", "Public Health Nurse", "Community Health Nurse", "Home Health Nurse", "Hospice Nurse", "School Nurse", "Industrial Nurse", "Correctional Nurse", "Forensic Nurse", "Correctional Health Nurse", "Prison Nurse", "Mental Health Nurse", "Psychiatric Nurse Practitioner", "Addiction Nurse", "Substance Abuse Nurse", "Rehabilitation Nurse", "Physical Rehabilitation Nurse", "Occupational Rehabilitation Nurse", "Speech-Language Pathology Nurse", "Orthopedic Rehabilitation Nurse", "Cardiac Rehabilitation Nurse", "Wound Care Nurse", "Diabetes Nurse", "Endocrine Nurse", "Pulmonary Rehabilitation Nurse", "Burn Care Nurse", "Plastic Surgery Nurse", "Orthopedic Nurse", "Orthopedic Surgery Nurse", "Orthopedic Trauma Nurse", "Orthopedic Oncology Nurse", "Orthopedic Rehabilitation Nurse", "Orthopedic Nurse Practitioner", "Orthopedic Surgical First Assistant", "Wound Care Nurse", "Ostomy Nurse", "Continence Nurse", "Enterostomal Therapy Nurse", "Colorectal Nurse", "Gastrointestinal Nurse", "Ostomy Care Nurse", "Diabetes Nurse Educator", "Diabetes Nurse Specialist", "Diabetes Management Nurse", "Diabetes Educator", "Endocrine Nurse", "Endocrinology Nurse Practitioner", "Thyroid Nurse", "Metabolic Nurse", "Hormone Nurse", "Pituitary Nurse", "Adrenal Nurse", "Gastroenterology Nurse", "Gastrointestinal Nurse", "Endoscopy Nurse", "Hepatology Nurse", "Liver Transplant Nurse", "Pancreatic Nurse", "Nutrition Support Nurse", "Renal Nurse", "Nephrology Nurse", "Hemodialysis Nurse", "Peritoneal Dialysis Nurse", "Kidney Transplant Nurse", "Renal Transplant Nurse", "Transplant Coordinator Nurse", "Cardiology Nurse", "Cardiovascular Nurse", "Cardiac Catheterization Lab Nurse", "Electrophysiology Nurse", "Telemetry Nurse", "Cardiothoracic Nurse", "Vascular Nurse", "Critical Care Nurse", "Intensive Care Unit Nurse", "Emergency Room Nurse", "Trauma Nurse", "Neonatal Intensive Care Unit Nurse", "Pediatric Intensive Care Unit Nurse", "Cardiac Intensive Care Unit Nurse", "Surgical Intensive Care Unit Nurse", "Burn Intensive Care Unit Nurse", "Neuro Intensive Care Unit Nurse", "Transplant Intensive Care Unit Nurse", "Medical Intensive Care Unit Nurse", "Pulmonary Intensive Care Unit Nurse", "Oncology Intensive Care Unit Nurse", "Step-Down Nurse", "Intermediate Care Nurse", "Progressive Care Nurse", "High Dependency Unit Nurse", "Acute Care Nurse", "Hospitalist Nurse", "Hospital Medicine Nurse", "General Medicine Nurse", "Internal Medicine Nurse", "Family Medicine Nurse", "Gastroenterology Nurse", "Pulmonary Nurse", "Cardiology Nurse", "Rheumatology Nurse", "Endocrinology Nurse", "Nephrology Nurse", "Hematology Nurse", "Infectious Disease Nurse"};
    vector<Position> result;
    for (int i=0; i<num; i++)
    {
        result.push_back(Position(positions[rand()%positions.size()], rand()%1000));
    }
    return result;
}


int main() {
    Heap heap;
    vector<string> nurses;
    vector<Position> positions;
    int numPos;
    int numNur;

    bool run = true;
    while (run) {
        int x;
        menu();
        std::cin >> x;
        if (x == 1) {
            nurses = nurseInput();
        }
        else if (x==2)
        {
            for (Position i : positions)
            {
                cout << i.getName() << "-" << std::to_string(i.getPriority()) << endl;
            }
        }
        else if (x==3)
        {
            heap = Heap(positions, numPos);
            heap.print();
        }
        else if (x==4)
        {
            for (int i=0; i<nurses.size() && i<positions.size(); i++) {
                cout << nurses[i] << " = " << heap.extract().getName() << endl;
            }
            if (nurses.size() < positions.size())
            {
                cout << "Understaffed with highest priority positions filled." << endl;
            }
            else if (nurses.size() > positions.size())
            {
                cout << "Overstaffed." << endl;
            }
            else
            {
                cout << "Perfectly staffed with all positions filled." << endl;
            }
        }
        else if (x == 6) {
            run = false;
        }
        else if (x == 7)
        {
            std::cin >> numPos;
            positions = randomPositions(numPos);
        }
        else if (x == 8)
        {
            Nurse nurse;
            std::cin >> numNur;
            nurses = nurse.getNames(numNur);
        }
        else
        {
            std::cout << "Invalid Input, please input valid menu selection" << std::endl;
        }
    }


    // std::vector<Position> in;
    // for (int i=0; i<10; i++)
    // {
    //     in.push_back(Position("help"+std::to_string(i), rand()));
    // }
    // Heap res(in, 10);
    // res.print();
    // std::cout << std::endl;
    // res.insert(Position("kyle", 20000));
    // res.print();

    return 0;
}
