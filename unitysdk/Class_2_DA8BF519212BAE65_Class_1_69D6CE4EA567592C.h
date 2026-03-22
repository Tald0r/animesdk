#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_94AEE9C7114702E7;
class Class_2_DA8BF519212BAE65;
class Class_2_DA8BF519212BAE65_Class_1_F7E52B4C6345E63C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DA8BF519212BAE65_CLASS_1_69D6CE4EA567592C_COMPARE_OFFSET UNITYSDK_OFFSET(0x714B430)
#define CLASS_2_DA8BF519212BAE65_CLASS_1_69D6CE4EA567592C__CTOR_OFFSET UNITYSDK_OFFSET(0x714B340)

inline static constexpr unsigned int Class_2_DA8BF519212BAE65_Class_1_69D6CE4EA567592C_TypeDefinitionIndex = 45400;

class Class_2_DA8BF519212BAE65_Class_1_69D6CE4EA567592C : public ::System::Object
{
public:
	::Class_2_DA8BF519212BAE65* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_2_DA8BF519212BAE65_Class_1_F7E52B4C6345E63C*>* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_2_DA8BF519212BAE65_Class_1_F7E52B4C6345E63C*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_DA8BF519212BAE65_Class_1_F7E52B4C6345E63C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_CLASS_1_69D6CE4EA567592C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Compare(::Class_2_94AEE9C7114702E7* a1, ::Class_2_94AEE9C7114702E7* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_94AEE9C7114702E7*, ::Class_2_94AEE9C7114702E7*))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_CLASS_1_69D6CE4EA567592C_COMPARE_OFFSET))(this, a1, a2);
	}
};
