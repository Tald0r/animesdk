#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/HoundPlayerAddedTextureStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_0C791B68CB2A5BF5;
class Class_1_E13183B148E560DC;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class TextureSheetData; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }

#define CLASS_1_3D219FE0BE635557_METHOD_1_35B31DEB6C24AF27_OFFSET UNITYSDK_OFFSET(0x9A99D30)
#define CLASS_1_3D219FE0BE635557_METHOD_1_40BCA00DF34766D9_OFFSET UNITYSDK_OFFSET(0x9A995D0)
#define CLASS_1_3D219FE0BE635557_METHOD_1_432350F996CF2E69_OFFSET UNITYSDK_OFFSET(0x9A99A50)
#define CLASS_1_3D219FE0BE635557_METHOD_1_4C7C0C356764D132_OFFSET UNITYSDK_OFFSET(0x9A99B80)
#define CLASS_1_3D219FE0BE635557_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x9A99E20)
#define CLASS_1_3D219FE0BE635557_METHOD_1_7B38915D09A90FF2_OFFSET UNITYSDK_OFFSET(0x9A991F0)
#define CLASS_1_3D219FE0BE635557_METHOD_1_7FBAA229ED524F8E_1_OFFSET UNITYSDK_OFFSET(0x9A99CA0)
#define CLASS_1_3D219FE0BE635557_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x9A999E0)
#define CLASS_1_3D219FE0BE635557_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x9A99AE0)
#define CLASS_1_3D219FE0BE635557_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9A99920)
#define CLASS_1_3D219FE0BE635557_METHOD_1_A15BA9596DA44418_OFFSET UNITYSDK_OFFSET(0x9A99890)
#define CLASS_1_3D219FE0BE635557_METHOD_1_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x9A99470)
#define CLASS_1_3D219FE0BE635557__CTOR_OFFSET UNITYSDK_OFFSET(0x9A99080)

inline static constexpr unsigned int Class_1_3D219FE0BE635557_TypeDefinitionIndex = 56045;

class Class_1_3D219FE0BE635557 : public ::System::Object
{
public:
	::Class_1_E13183B148E560DC* Field_1_2; // 0x10
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer* Field_1_10; // 0x18
	::System::Action* Field_1_11; // 0x20
	::DG::Tweening::Tween* Field_1_5; // 0x28
	::UnityEngine::MaterialPropertyBlock* Field_1_12; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x38
	::UnityEngine::GameObject* Field_1_0; // 0x40
	::UnityEngine::SpriteRenderer* Field_1_1; // 0x48
	::System::Int32 Field_1_6; // 0x50
	::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus Field_1_9; // 0x54
	::MoleMole::MiniGame::TartarusHounds::Direction Field_1_13; // 0x58
	::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus Field_1_8; // 0x5C
	::System::Boolean Field_1_4; // 0x60
	::System::Boolean Field_1_3; // 0x61

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B38915D09A90FF2(::MoleMole::TextureSheetData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_7B38915D09A90FF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_1_A15BA9596DA44418(::MoleMole::TextureSheetData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_A15BA9596DA44418_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_1_432350F996CF2E69(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_432350F996CF2E69_OFFSET))(this, a1);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_4C7C0C356764D132(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_4C7C0C356764D132_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FBAA229ED524F8E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_7FBAA229ED524F8E_1_OFFSET))(this);
	}

	::System::Void Method_1_35B31DEB6C24AF27(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_35B31DEB6C24AF27_OFFSET))(this, a1);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_0C791B68CB2A5BF5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C791B68CB2A5BF5*))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_40BCA00DF34766D9(::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus))((::PBYTE)hIl2Cpp + CLASS_1_3D219FE0BE635557_METHOD_1_40BCA00DF34766D9_OFFSET))(this, a1);
	}
};
