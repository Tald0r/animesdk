#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BD67E5EC91589BF1.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/Struct_2_61D95EB9B5A93E74.h"

class Class_0_16E4307DCC419505_268;
namespace MoleMole { class UITowerDefenseMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define CLASS_2_BC3CCD436C954A09_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x88B0E20)
#define CLASS_2_BC3CCD436C954A09_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x88B1440)
#define CLASS_2_BC3CCD436C954A09_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x88B15E0)
#define CLASS_2_BC3CCD436C954A09_METHOD_2_31830AE2F8CBD1F3_OFFSET UNITYSDK_OFFSET(0x88B07D0)
#define CLASS_2_BC3CCD436C954A09_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x88B12E0)
#define CLASS_2_BC3CCD436C954A09_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x88B1060)
#define CLASS_2_BC3CCD436C954A09_METHOD_2_96BAA37EB74FABAD_OFFSET UNITYSDK_OFFSET(0x88B05E0)
#define CLASS_2_BC3CCD436C954A09_METHOD_2_CA441985E642C437_OFFSET UNITYSDK_OFFSET(0x88B0D50)
#define CLASS_2_BC3CCD436C954A09__CTOR_OFFSET UNITYSDK_OFFSET(0x88B0280)

inline static constexpr unsigned int Class_2_BC3CCD436C954A09_TypeDefinitionIndex = 47046;

class Class_2_BC3CCD436C954A09 : public ::Class_1_BD67E5EC91589BF1
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UIButtonEx*>* Field_2_1; // 0x10
	::MoleMole::Battle::Entity* Field_2_4; // 0x18
	::MoleMole::UITowerDefenseMainPageController* Field_2_0; // 0x20
	::MoleMole::Battle::Entity* Field_2_3; // 0x28
	::System::Int32 Field_2_2; // 0x30
	::System::Int32 Field_2_5; // 0x34

	::System::Void _ctor(::MoleMole::UITowerDefenseMainPageController* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BC3CCD436C954A09__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_268* Method_2_96BAA37EB74FABAD()
	{
		return ((::Class_0_16E4307DCC419505_268*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC3CCD436C954A09_METHOD_2_96BAA37EB74FABAD_OFFSET))(this);
	}

	::Struct_2_61D95EB9B5A93E74 Method_2_31830AE2F8CBD1F3(::MoleMole::InputActionEvent a1)
	{
		return ((::Struct_2_61D95EB9B5A93E74(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_BC3CCD436C954A09_METHOD_2_31830AE2F8CBD1F3_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_268* Method_2_CA441985E642C437(::MoleMole::UITowerDefenseMainPageController* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::Class_0_16E4307DCC419505_268*(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BC3CCD436C954A09_METHOD_2_CA441985E642C437_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC3CCD436C954A09_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC3CCD436C954A09_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC3CCD436C954A09_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC3CCD436C954A09_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC3CCD436C954A09_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}
};
