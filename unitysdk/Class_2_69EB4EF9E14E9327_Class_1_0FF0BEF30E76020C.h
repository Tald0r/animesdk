#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_69EB4EF9E14E9327_Class_1_F1AD72368E0D7BE3_11;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_69EB4EF9E14E9327_CLASS_1_0FF0BEF30E76020C_METHOD_1_B18C2FB6E18FCDD7_OFFSET UNITYSDK_OFFSET(0x7E99920)
#define CLASS_2_69EB4EF9E14E9327_CLASS_1_0FF0BEF30E76020C__CTOR_OFFSET UNITYSDK_OFFSET(0x7E99910)

inline static constexpr unsigned int Class_2_69EB4EF9E14E9327_Class_1_0FF0BEF30E76020C_TypeDefinitionIndex = 71038;

class Class_2_69EB4EF9E14E9327_Class_1_0FF0BEF30E76020C : public ::System::Object
{
public:
	::Class_2_69EB4EF9E14E9327_Class_1_F1AD72368E0D7BE3_11* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69EB4EF9E14E9327_CLASS_1_0FF0BEF30E76020C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B18C2FB6E18FCDD7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_69EB4EF9E14E9327_CLASS_1_0FF0BEF30E76020C_METHOD_1_B18C2FB6E18FCDD7_OFFSET))(this, a1);
	}
};
