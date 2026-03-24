#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_4.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/EtherEyesFixConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectOverrideConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_3_E41C1EFCBD73D3C9;
class EtherEyesOutlineRenderer;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class EtherEyesRibbonGenerator; }
namespace MoleMole { class MonoAnimatorPlaybackPlugin; }
namespace MoleMole::Config { class EtherEyesObjectTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_0683A56451C2D19E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB33FA10)
#define CLASS_3_0683A56451C2D19E_METHOD_3_5222D806C70D8FB5_OFFSET UNITYSDK_OFFSET(0xB33FB10)
#define CLASS_3_0683A56451C2D19E_METHOD_3_5FFF477DE12718CC_OFFSET UNITYSDK_OFFSET(0xB340200)
#define CLASS_3_0683A56451C2D19E_METHOD_3_99C21D3DDCE36C13_OFFSET UNITYSDK_OFFSET(0xB33FFC0)
#define CLASS_3_0683A56451C2D19E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB33FEB0)
#define CLASS_3_0683A56451C2D19E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xB33FF10)
#define CLASS_3_0683A56451C2D19E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB33F380)
#define CLASS_3_0683A56451C2D19E__CCTOR_OFFSET UNITYSDK_OFFSET(0xB33FA70)
#define CLASS_3_0683A56451C2D19E__CTOR_OFFSET UNITYSDK_OFFSET(0xB33FAF0)

inline static constexpr unsigned int Class_3_0683A56451C2D19E_TypeDefinitionIndex = 49796;

class Class_3_0683A56451C2D19E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_39 = 0xAD; // 0x0
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_3_28; // 0x48
	::UnityEngine::Material* Field_3_17; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_27; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_3_19; // 0x60
	::DG::Tweening::Tweener* Field_3_23; // 0x68
	::DG::Tweening::Tweener* Field_3_21; // 0x70
	::Foundation::AssetRequestHandle Field_3_18; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_3_24; // 0x98
	::DG::Tweening::Tweener* Field_3_16; // 0xA0
	::MoleMole::EntityHandle Field_3_26; // 0xA8
	::DG::Tweening::Tweener* Field_3_20; // 0xB8
	::MoleMole::Config::EtherEyesFixConfig Field_3_31; // 0xC0
	::System::Collections::Generic::List_1<::MoleMole::EtherEyesRibbonGenerator*>* Field_3_33; // 0xE8
	::UnityEngine::Material* Field_3_34; // 0xF0
	::MoleMole::MonoAnimatorPlaybackPlugin* Field_3_32; // 0xF8
	::DG::Tweening::Tweener* Field_3_22; // 0x100
	::System::String* Field_3_36; // 0x108
	::EtherEyesOutlineRenderer* Field_3_29; // 0x110
	::MoleMole::EntityHandle Field_3_25; // 0x118
	::System::Boolean Field_3_5; // 0x128
	::System::Boolean Field_3_15; // 0x129
	::System::Boolean Field_3_4; // 0x12A
	::System::Boolean Field_3_13; // 0x12B
	::System::Boolean Field_3_10; // 0x12C
	::System::Boolean Field_3_37; // 0x12D
	::System::Boolean Field_3_14; // 0x12E
	::Enum_3_D2BBBB758B896E04_4 Field_3_30; // 0x130
	::System::Boolean Field_3_12; // 0x134
	::System::Boolean Field_3_11; // 0x135
	::MoleMole::Config::EtherEyesObjectConfig Field_3_0; // 0x138
	::System::Boolean Field_3_8; // 0x150
	::System::Boolean Field_3_9; // 0x151
	::System::Boolean Field_3_2; // 0x152
	::MoleMole::Config::EtherEyesObjectOverrideConfig Field_3_1; // 0x153
	::System::Single Field_3_7; // 0x158
	::System::Single Field_3_6; // 0x15C
	::System::Single Field_3_3; // 0x160
	::MoleMole::Config::EtherEyesObjectSize Field_3_35; // 0x164
	::System::Single Field_3_38; // 0x168

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E_GETCLASSID_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Method_3_5222D806C70D8FB5()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Collider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E_METHOD_3_5222D806C70D8FB5_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_0683A56451C2D19E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_0683A56451C2D19E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_99C21D3DDCE36C13(::MoleMole::Config::EtherEyesObjectTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EtherEyesObjectTrait*))((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E_METHOD_3_99C21D3DDCE36C13_OFFSET))(this, a1);
	}

	::System::Void Method_3_5FFF477DE12718CC(::Class_3_E41C1EFCBD73D3C9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E41C1EFCBD73D3C9*))((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E_METHOD_3_5FFF477DE12718CC_OFFSET))(this, a1);
	}
};
