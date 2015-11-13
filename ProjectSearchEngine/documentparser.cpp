#include "documentparser.h"

DocumentParser::DocumentParser()
{
    //xml_document doc;
    result = doc.load_file("2pages.xml");
}

void DocumentParser::parseToAvl()
{
    //get page node
    xml_node top = doc.first_child();
     for(xml_node page = top.child("page"); page; page = page.next_sibling("page"))
     {
        //get pageID
        xml_node child = page.child("id");
        int pageID = atoi(child.child_value());
        //get title
        child = page.child("title");
        string title = child.child_value();
        //get text
        child = page.child("revision");
        child = child.child("text");
        string text = child.child_value();
        stringstream textStream(text);
        string word;
        while(textStream >> word)
        {
            //check word for stop word
            //stem
            //new entry
            //modify entry.PageData
            //index calls addEntry
        }
     }

}

void DocumentParser::traversePractice()
{
    //smallText.xml
    /*
    for(xml_node tool = doc.first_child(); tool; tool = tool.next_sibling())
    {
        cout << "Tool: " << tool.name() << endl;

        for(xml_node child = tool.first_child(); child; child = child.next_sibling())
        {
            cout << "\t" << child.name() << " = " << child.child_value() << endl;
        }

        cout << endl;
    }
    */

    //food.xml
    /*
    for(xml_node tool = doc.first_child(); tool; tool = tool.next_sibling())
    {
        cout << "Tool " << tool.name() << endl;

        for(xml_node food = tool.first_child(); food; food = food.next_sibling())
        {
            cout << "\t" << food.name() << endl;

            for(xml_node child = food.first_child(); child; child = child.next_sibling())
            {
                cout << "\t\t" << child.name() << " = " << child.child_value() << endl;
            }
        }

        cout << endl;
    }
    */

    xml_node top = doc.first_child();
    cout << "Top " << top.name() << endl;
    for(xml_node page = top.child("page"); page; page = page.next_sibling("page"))
    {
        cout << "\tPage\n";
        xml_node child = page.child("title");
        cout << "\t\tTitle = " << child.child_value() << endl;
        child = page.child("id");
        cout << "\t\tID = " << child.child_value() << endl;
        //xml_attribute text = page.attribute("text");
        child = page.child("revision");
        child = child.child("text");
        if(!child)
            cout << "\t\tText = invalid node\n";
        else
            //cout << "\t\tText = " << child.text().get() << endl;
            cout << "\t\tText = " << child.child_value() << endl;
    }
    cout << endl;

}
