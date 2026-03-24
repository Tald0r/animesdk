#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_699787DEDB234668_Struct_2_04EA0A3341441B4F_1.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData_PanelSettle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E947BE5546FF774A;
class Class_1_FAB330A19FB8EDA0;
class Class_2_581B880F1146BE79;
class Class_2_7E982D325DFD55DA;
namespace MoleMole::DisplayCase { class DisplayGroupItemData; }
namespace MoleMole::DisplayCase { class DisplayItemData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_699787DEDB234668_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA735D00)
#define CLASS_1_699787DEDB234668_METHOD_1_033430C87D681864_OFFSET UNITYSDK_OFFSET(0xA7388C0)
#define CLASS_1_699787DEDB234668_METHOD_1_0A6357CF183B0175_OFFSET UNITYSDK_OFFSET(0xA738D00)
#define CLASS_1_699787DEDB234668_METHOD_1_0F3F10D7D9D6C346_1_OFFSET UNITYSDK_OFFSET(0xA738AF0)
#define CLASS_1_699787DEDB234668_METHOD_1_0F3F10D7D9D6C346_OFFSET UNITYSDK_OFFSET(0xA7375E0)
#define CLASS_1_699787DEDB234668_METHOD_1_1647678ADD53D6AB_OFFSET UNITYSDK_OFFSET(0xA73A710)
#define CLASS_1_699787DEDB234668_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA736B60)
#define CLASS_1_699787DEDB234668_METHOD_1_3829A1E9DE375D0A_OFFSET UNITYSDK_OFFSET(0xA735D10)
#define CLASS_1_699787DEDB234668_METHOD_1_42C2489AF0AD0081_OFFSET UNITYSDK_OFFSET(0xA739D30)
#define CLASS_1_699787DEDB234668_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0xA739440)
#define CLASS_1_699787DEDB234668_METHOD_1_48A070CF4162E501_OFFSET UNITYSDK_OFFSET(0xA73AB10)
#define CLASS_1_699787DEDB234668_METHOD_1_48DC350F8317F043_OFFSET UNITYSDK_OFFSET(0xA73B760)
#define CLASS_1_699787DEDB234668_METHOD_1_492BE79AC2A8AE30_OFFSET UNITYSDK_OFFSET(0xA736770)
#define CLASS_1_699787DEDB234668_METHOD_1_49F07754C1189EAE_OFFSET UNITYSDK_OFFSET(0xA73B000)
#define CLASS_1_699787DEDB234668_METHOD_1_5620788F93BDCEB1_OFFSET UNITYSDK_OFFSET(0xA736510)
#define CLASS_1_699787DEDB234668_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0xA738370)
#define CLASS_1_699787DEDB234668_METHOD_1_8546CB79DD391621_OFFSET UNITYSDK_OFFSET(0xA736C20)
#define CLASS_1_699787DEDB234668_METHOD_1_A5D032209732E69F_OFFSET UNITYSDK_OFFSET(0xA739590)
#define CLASS_1_699787DEDB234668_METHOD_1_B605C1653EACBC07_OFFSET UNITYSDK_OFFSET(0xA736DB0)
#define CLASS_1_699787DEDB234668_METHOD_1_B866EF657B246E9A_OFFSET UNITYSDK_OFFSET(0xA7381E0)
#define CLASS_1_699787DEDB234668_METHOD_1_BE253ACF49BE36BD_OFFSET UNITYSDK_OFFSET(0xA739A30)
#define CLASS_1_699787DEDB234668_METHOD_1_C33CAC850B82C7D8_OFFSET UNITYSDK_OFFSET(0xA738FB0)
#define CLASS_1_699787DEDB234668_METHOD_1_CD9B97298FEB96F9_OFFSET UNITYSDK_OFFSET(0xA739630)
#define CLASS_1_699787DEDB234668_METHOD_1_CF667B25396A76F4_OFFSET UNITYSDK_OFFSET(0xA737DD0)
#define CLASS_1_699787DEDB234668_METHOD_1_DE12F16E897AFCE4_OFFSET UNITYSDK_OFFSET(0xA73B260)
#define CLASS_1_699787DEDB234668_METHOD_1_EB1549E9C6E3B4E9_OFFSET UNITYSDK_OFFSET(0xA7377F0)
#define CLASS_1_699787DEDB234668_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xA739810)
#define CLASS_1_699787DEDB234668__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA735B10)
#define CLASS_1_699787DEDB234668__CTOR_OFFSET UNITYSDK_OFFSET(0xA735A00)

inline static constexpr unsigned int Class_1_699787DEDB234668_TypeDefinitionIndex = 44816;

class Class_1_699787DEDB234668 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FAB330A19FB8EDA0*>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_1_7; // 0x18
	::UnityEngine::GameObject* Field_1_0; // 0x20
	::Class_1_E947BE5546FF774A* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::Class_2_7E982D325DFD55DA*>* Field_1_5; // 0x30
	::UnityEngine::BoxCollider* Field_1_6; // 0x38
	::MoleMole::DisplayCase::DisplayGroupItemData* Field_1_2; // 0x40
	::System::Boolean Field_1_3; // 0x48
	::System::Boolean Field_1_8; // 0x49

	::System::Void _ctor(::Class_1_E947BE5546FF774A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E947BE5546FF774A*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_3829A1E9DE375D0A(::MoleMole::DisplayCase::DisplayGroupItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::DisplayCase::DisplayGroupItemData*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_3829A1E9DE375D0A_OFFSET))(this, a1);
	}

	::System::Void Method_1_5620788F93BDCEB1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_5620788F93BDCEB1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8546CB79DD391621(::Class_2_7E982D325DFD55DA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_7E982D325DFD55DA*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_8546CB79DD391621_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F3F10D7D9D6C346(::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_0F3F10D7D9D6C346_OFFSET))(this, a1);
	}

	::System::Void Method_1_EB1549E9C6E3B4E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_EB1549E9C6E3B4E9_OFFSET))(this);
	}

	::System::Void Method_1_CF667B25396A76F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_CF667B25396A76F4_OFFSET))(this);
	}

	static ::System::Void Method_1_B866EF657B246E9A(::Class_2_581B880F1146BE79* a1, ::Class_1_699787DEDB234668_Struct_2_04EA0A3341441B4F_1& a2)
	{
		return ((::System::Void(*)(::Class_2_581B880F1146BE79*, ::Class_1_699787DEDB234668_Struct_2_04EA0A3341441B4F_1&))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_B866EF657B246E9A_OFFSET))(a1, a2);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::Boolean Method_1_033430C87D681864(::UnityEngine::BoxCollider* a1, ::Class_1_FAB330A19FB8EDA0*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::BoxCollider*, ::Class_1_FAB330A19FB8EDA0*&))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_033430C87D681864_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_492BE79AC2A8AE30(::Class_1_FAB330A19FB8EDA0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAB330A19FB8EDA0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_492BE79AC2A8AE30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0F3F10D7D9D6C346_1(::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayItemData*>*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_0F3F10D7D9D6C346_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A6357CF183B0175()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_0A6357CF183B0175_OFFSET))(this);
	}

	::System::Void Method_1_C33CAC850B82C7D8(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_C33CAC850B82C7D8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CD9B97298FEB96F9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_CD9B97298FEB96F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5D032209732E69F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_A5D032209732E69F_OFFSET))(this);
	}

	::System::Boolean Method_1_BE253ACF49BE36BD(::Class_1_FAB330A19FB8EDA0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FAB330A19FB8EDA0*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_BE253ACF49BE36BD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_42C2489AF0AD0081(::Class_1_FAB330A19FB8EDA0* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_FAB330A19FB8EDA0*, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_42C2489AF0AD0081_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_48A070CF4162E501(::Class_2_581B880F1146BE79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_581B880F1146BE79*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_48A070CF4162E501_OFFSET))(this, a1);
	}

	::System::Void Method_1_49F07754C1189EAE(::Class_1_FAB330A19FB8EDA0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAB330A19FB8EDA0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_49F07754C1189EAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE12F16E897AFCE4(::Class_2_7E982D325DFD55DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7E982D325DFD55DA*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_DE12F16E897AFCE4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_1_B605C1653EACBC07(::Class_1_FAB330A19FB8EDA0* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FAB330A19FB8EDA0*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_B605C1653EACBC07_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle>* Method_1_1647678ADD53D6AB(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_1647678ADD53D6AB_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_48DC350F8317F043(::Class_1_FAB330A19FB8EDA0* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_FAB330A19FB8EDA0*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_METHOD_1_48DC350F8317F043_OFFSET))(this, a1, a2);
	}
};
