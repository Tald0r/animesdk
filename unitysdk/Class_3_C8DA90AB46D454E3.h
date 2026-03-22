#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9C00C44C10E42328.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_008187F6EB77F9CD.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_1_934291CCF12CB02E;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C8DA90AB46D454E3_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0xB981380)
#define CLASS_3_C8DA90AB46D454E3_METHOD_3_5EAF4A88CD2189D7_OFFSET UNITYSDK_OFFSET(0xB980D80)
#define CLASS_3_C8DA90AB46D454E3_METHOD_3_935E33F69C2746F0_OFFSET UNITYSDK_OFFSET(0xB9813C0)
#define CLASS_3_C8DA90AB46D454E3_METHOD_3_A1DE789A873416B1_OFFSET UNITYSDK_OFFSET(0xB980FC0)
#define CLASS_3_C8DA90AB46D454E3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB981320)
#define CLASS_3_C8DA90AB46D454E3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB981220)
#define CLASS_3_C8DA90AB46D454E3__CTOR_OFFSET UNITYSDK_OFFSET(0xB980BD0)

inline static constexpr unsigned int Class_3_C8DA90AB46D454E3_TypeDefinitionIndex = 50229;

class Class_3_C8DA90AB46D454E3 : public ::Class_2_9C00C44C10E42328
{
public:
	::MoleMole::EntityHandle Field_3_0; // 0x18
	::Class_1_934291CCF12CB02E* Field_3_1; // 0x28

	::System::Void _ctor(::MoleMole::EntityHandle& a1, ::System::Collections::Generic::List_1<::System::String*>*& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle&, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_C8DA90AB46D454E3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_5EAF4A88CD2189D7(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_3_C8DA90AB46D454E3_METHOD_3_5EAF4A88CD2189D7_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8DA90AB46D454E3_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8DA90AB46D454E3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8DA90AB46D454E3_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_3_935E33F69C2746F0(::UnityEngine::RaycastHit& a1, ::Class_1_934291CCF12CB02E*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::Class_1_934291CCF12CB02E*&))((::PBYTE)hIl2Cpp + CLASS_3_C8DA90AB46D454E3_METHOD_3_935E33F69C2746F0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A1DE789A873416B1(::Struct_2_008187F6EB77F9CD& a1, ::Class_1_934291CCF12CB02E*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_008187F6EB77F9CD&, ::Class_1_934291CCF12CB02E*&))((::PBYTE)hIl2Cpp + CLASS_3_C8DA90AB46D454E3_METHOD_3_A1DE789A873416B1_OFFSET))(this, a1, a2);
	}
};
