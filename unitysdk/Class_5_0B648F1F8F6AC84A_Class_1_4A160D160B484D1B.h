#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_0B648F1F8F6AC84A;
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessPieceEffect; }
namespace System { class Action; }

#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA6F2930)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA6F2BC0)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA6F2C20)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA6F2BD0)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6F2920)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B__CTOR_OFFSET UNITYSDK_OFFSET(0xA6F2910)

inline static constexpr unsigned int Class_5_0B648F1F8F6AC84A_Class_1_4A160D160B484D1B_TypeDefinitionIndex = 46161;

class Class_5_0B648F1F8F6AC84A_Class_1_4A160D160B484D1B : public ::System::Object
{
public:
	::System::Object* Field_1_1; // 0x10
	::System::Action* Field_1_5; // 0x18
	::Class_5_0B648F1F8F6AC84A* Field_1_4; // 0x20
	::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect* Field_1_2; // 0x28
	::MoleMole::UIHollowChessPieceParticle* Field_1_6; // 0x30
	::System::Int32 Field_1_0; // 0x38
	::System::Single Field_1_3; // 0x3C
	::System::Single Field_1_7; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_4A160D160B484D1B_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
