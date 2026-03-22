#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_3.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/EtherEyesFixConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectOverrideConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_3_E41C1EFCBD73D3C9_5;
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

#define CLASS_3_0683A56451C2D19E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x90A4BB0)
#define CLASS_3_0683A56451C2D19E_METHOD_3_5222D806C70D8FB5_OFFSET UNITYSDK_OFFSET(0x90A4CB0)
#define CLASS_3_0683A56451C2D19E_METHOD_3_5FFF477DE12718CC_OFFSET UNITYSDK_OFFSET(0x90A5300)
#define CLASS_3_0683A56451C2D19E_METHOD_3_99C21D3DDCE36C13_OFFSET UNITYSDK_OFFSET(0x90A5050)
#define CLASS_3_0683A56451C2D19E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x90A52A0)
#define CLASS_3_0683A56451C2D19E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x90A5510)
#define CLASS_3_0683A56451C2D19E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x90A4520)
#define CLASS_3_0683A56451C2D19E__CCTOR_OFFSET UNITYSDK_OFFSET(0x90A4C10)
#define CLASS_3_0683A56451C2D19E__CTOR_OFFSET UNITYSDK_OFFSET(0x90A4C90)

inline static constexpr unsigned int Class_3_0683A56451C2D19E_TypeDefinitionIndex = 47550;

class Class_3_0683A56451C2D19E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_39 = 0xAD; // 0x0
	::Foundation::AssetRequestHandle Field_3_18; // 0x48
	::DG::Tweening::Tweener* Field_3_23; // 0x68
	::MoleMole::MonoAnimatorPlaybackPlugin* Field_3_32; // 0x70
	::MoleMole::EntityHandle Field_3_25; // 0x78
	::DG::Tweening::Tweener* Field_3_16; // 0x88
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_27; // 0x90
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_3_28; // 0x98
	::DG::Tweening::Tweener* Field_3_21; // 0xA0
	::DG::Tweening::Tweener* Field_3_22; // 0xA8
	::System::String* Field_3_36; // 0xB0
	::System::Collections::Generic::List_1<::MoleMole::EtherEyesRibbonGenerator*>* Field_3_33; // 0xB8
	::MoleMole::Config::EtherEyesFixConfig Field_3_31; // 0xC0
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_3_24; // 0xE8
	::UnityEngine::Material* Field_3_17; // 0xF0
	::UnityEngine::Material* Field_3_34; // 0xF8
	::EtherEyesOutlineRenderer* Field_3_29; // 0x100
	::DG::Tweening::Tweener* Field_3_20; // 0x108
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_3_19; // 0x110
	::MoleMole::EntityHandle Field_3_26; // 0x118
	::System::Single Field_3_3; // 0x128
	::MoleMole::Config::EtherEyesObjectSize Field_3_35; // 0x12C
	::System::Boolean Field_3_8; // 0x130
	::System::Boolean Field_3_9; // 0x131
	::System::Boolean Field_3_15; // 0x132
	::System::Boolean Field_3_5; // 0x133
	::System::Boolean Field_3_37; // 0x134
	::System::Boolean Field_3_12; // 0x135
	::System::Boolean Field_3_10; // 0x136
	::System::Boolean Field_3_14; // 0x137
	::System::Boolean Field_3_13; // 0x138
	::System::Boolean Field_3_2; // 0x139
	::System::Boolean Field_3_4; // 0x13A
	::MoleMole::Config::EtherEyesObjectOverrideConfig Field_3_1; // 0x13B
	::System::Boolean Field_3_11; // 0x13E
	::System::Single Field_3_7; // 0x140
	::Enum_3_D2BBBB758B896E04_3 Field_3_30; // 0x144
	::System::Single Field_3_6; // 0x148
	::MoleMole::Config::EtherEyesObjectConfig Field_3_0; // 0x14C
	::System::Single Field_3_38; // 0x164

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

	::System::Void Method_3_99C21D3DDCE36C13(::MoleMole::Config::EtherEyesObjectTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EtherEyesObjectTrait*))((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E_METHOD_3_99C21D3DDCE36C13_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_5FFF477DE12718CC(::Class_3_E41C1EFCBD73D3C9_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E41C1EFCBD73D3C9_5*))((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E_METHOD_3_5FFF477DE12718CC_OFFSET))(this, a1);
	}

	static ::Class_3_0683A56451C2D19E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_0683A56451C2D19E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_0683A56451C2D19E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
