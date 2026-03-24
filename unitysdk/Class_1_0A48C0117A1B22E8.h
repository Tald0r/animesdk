#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BB024667087A129E.h"
#include "unitysdk/Enum_3_BB702611CCC85D7E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_98B7A76C378FB1D8;
class Class_1_CE7E65A4D716F72C;
class Class_1_FAF1DA0B3AC1B487;
namespace MoleMole { class UIAvatarGraphics; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define CLASS_1_0A48C0117A1B22E8_METHOD_1_0651185C8BEF53DF_OFFSET UNITYSDK_OFFSET(0xA27E5F0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xA27B400)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_096C38E5BF16E495_OFFSET UNITYSDK_OFFSET(0xA27F830)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_0C60A530AA0118C2_OFFSET UNITYSDK_OFFSET(0xA2802F0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0xA27B510)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_100C37D9D1141569_OFFSET UNITYSDK_OFFSET(0xA27BDB0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_14A7CE2ECF457F42_OFFSET UNITYSDK_OFFSET(0xA27D5D0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_14CCEEF7AD740DD2_OFFSET UNITYSDK_OFFSET(0xA27E0F0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xA27BD10)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA27D0A0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0xA27C710)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_1F3793A40D6D0F7F_OFFSET UNITYSDK_OFFSET(0xA27D200)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA27D180)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA27D120)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_3D25BCF2F8C75054_OFFSET UNITYSDK_OFFSET(0xA27CE40)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA27F940)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA280180)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_4C6A485322DE374D_OFFSET UNITYSDK_OFFSET(0xA27FA50)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_67806EDAC18211A9_OFFSET UNITYSDK_OFFSET(0xA27EB40)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0xA27D6F0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_7AA2ECE99863FBA9_OFFSET UNITYSDK_OFFSET(0xA27D830)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_83D2F3AB8C27C6FE_OFFSET UNITYSDK_OFFSET(0xA27AE60)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0xA27C360)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0xA27E940)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0xA27FFF0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA27E080)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xA2800F0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_B65911EDBA9C245A_OFFSET UNITYSDK_OFFSET(0xA27FEB0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_B85A54436CB7CDD0_OFFSET UNITYSDK_OFFSET(0xA27C9E0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_BBBDE8776B157DAC_1_OFFSET UNITYSDK_OFFSET(0xA27DDD0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_BBBDE8776B157DAC_OFFSET UNITYSDK_OFFSET(0xA27DEF0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0xA27C400)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xA280170)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0xA27B260)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_EB44EFCB44CBA9C1_OFFSET UNITYSDK_OFFSET(0xA280100)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA27FAB0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_F0A86D68E04AD132_OFFSET UNITYSDK_OFFSET(0xA27FAC0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_FAC02AE2DEAC3F16_OFFSET UNITYSDK_OFFSET(0xA27B9C0)
#define CLASS_1_0A48C0117A1B22E8_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xA27E9D0)
#define CLASS_1_0A48C0117A1B22E8__CCTOR_OFFSET UNITYSDK_OFFSET(0xA27D1F0)
#define CLASS_1_0A48C0117A1B22E8__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA27BF90)
#define CLASS_1_0A48C0117A1B22E8__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA27C070)
#define CLASS_1_0A48C0117A1B22E8__CTOR_3_OFFSET UNITYSDK_OFFSET(0xA27C470)
#define CLASS_1_0A48C0117A1B22E8__CTOR_OFFSET UNITYSDK_OFFSET(0xA27AC30)

inline static constexpr unsigned int Class_1_0A48C0117A1B22E8_TypeDefinitionIndex = 46529;

class Class_1_0A48C0117A1B22E8 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A48C0117A1B22E8_TypeDefinitionIndex)->GetStaticField(0xA410);
	}
	// static const ::System::Single Field_1_25; // 0x0
	::UnityEngine::GameObject* Field_1_12; // 0x10
	::UnityEngine::Transform* Field_1_8; // 0x18
	::UnityEngine::Light* Field_1_15; // 0x20
	::UnityEngine::GameObject* Field_1_4; // 0x28
	::Class_1_98B7A76C378FB1D8* Field_1_11; // 0x30
	::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* Field_1_16; // 0x38
	::UnityEngine::Camera* Field_1_13; // 0x40
	::MoleMole::UIAvatarGraphics* Field_1_20; // 0x48
	::MoleMole::UIAvatarGraphics* Field_1_19; // 0x50
	::Class_1_CE7E65A4D716F72C* Field_1_18; // 0x58
	::Class_1_FAF1DA0B3AC1B487* Field_1_21; // 0x60
	::UnityEngine::GameObject* Field_1_3; // 0x68
	::UnityEngine::NAPRenderPipeline0::RTHandle* Field_1_10; // 0x70
	::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* Field_1_14; // 0x78
	::UnityEngine::Quaternion Field_1_24; // 0x80
	::System::Single Field_1_17; // 0x90
	::UnityEngine::Quaternion Field_1_23; // 0x94
	::System::Single Field_1_6; // 0xA4
	::UnityEngine::Vector2 Field_1_22; // 0xA8
	::System::UInt32 Field_1_9; // 0xB0
	::System::Boolean Field_1_27; // 0xB4
	::System::Boolean Field_1_5; // 0xB5
	::System::Boolean Field_1_1; // 0xB6
	::System::Boolean Field_1_2; // 0xB7
	::Enum_3_BB702611CCC85D7E Field_1_0; // 0xB8
	::System::Single Field_1_7; // 0xBC

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::Enum_3_BB702611CCC85D7E a4, ::System::Boolean a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4, ::System::String* a5, ::System::Boolean a6, ::Enum_3_BB702611CCC85D7E a7, ::UnityEngine::Experimental::Rendering::GraphicsFormat a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean, ::Enum_3_BB702611CCC85D7E, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void _ctor_2(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::UnityEngine::GameObject* a5, ::UnityEngine::GameObject* a6, ::System::Boolean a7, ::System::String* a8, ::System::Boolean a9, ::Enum_3_BB702611CCC85D7E a10, ::UnityEngine::Experimental::Rendering::GraphicsFormat a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::String*, ::System::Boolean, ::Enum_3_BB702611CCC85D7E, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void _ctor_3(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5, ::Enum_3_BB702611CCC85D7E a6, ::System::Boolean a7, ::UnityEngine::Experimental::Rendering::GraphicsFormat a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F3793A40D6D0F7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_1F3793A40D6D0F7F_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_14A7CE2ECF457F42(::MoleMole::UIAvatarGraphics* a1, ::MoleMole::UIAvatarLightSetting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_14A7CE2ECF457F42_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FAC02AE2DEAC3F16(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::String* a4, ::UnityEngine::Experimental::Rendering::GraphicsFormat a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_FAC02AE2DEAC3F16_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_7AA2ECE99863FBA9(::System::Boolean a1, ::System::UInt32 a2, ::MoleMole::UIAvatarLightSetting* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_7AA2ECE99863FBA9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Single Method_1_83D2F3AB8C27C6FE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_83D2F3AB8C27C6FE_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_14CCEEF7AD740DD2(::UnityEngine::GameObject* a1, ::Foundation::AssetPath a2, ::UnityEngine::GameObject* a3, ::Foundation::AssetPath a4, ::Class_1_98B7A76C378FB1D8* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::Foundation::AssetPath, ::Class_1_98B7A76C378FB1D8*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_14CCEEF7AD740DD2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Transform* Method_1_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Single Method_1_E7CD24A54D7ADF3B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_E7CD24A54D7ADF3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::UnityEngine::RenderTexture* Method_1_67806EDAC18211A9(::Foundation::AssetPath a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Action* a4, ::MoleMole::Config::EntityType a5, ::Foundation::AssetPath a6, ::System::Int32 a7)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType, ::Foundation::AssetPath, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_67806EDAC18211A9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_B85A54436CB7CDD0(::Enum_3_BB024667087A129E a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BB024667087A129E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_B85A54436CB7CDD0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0651185C8BEF53DF(::UnityEngine::GameObject* a1, ::Class_1_98B7A76C378FB1D8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_98B7A76C378FB1D8*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_0651185C8BEF53DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D25BCF2F8C75054(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_3D25BCF2F8C75054_OFFSET))(this, a1);
	}

	::UnityEngine::Camera* Method_1_4C6A485322DE374D()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_4C6A485322DE374D_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Single Method_1_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_68A2CA32DC720C44_OFFSET))(this);
	}

	::System::Void Method_1_100C37D9D1141569(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_100C37D9D1141569_OFFSET))(this, a1);
	}

	::UnityEngine::RenderTexture* Method_1_B65911EDBA9C245A(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Action* a4, ::MoleMole::Config::EntityType a5)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_B65911EDBA9C245A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_BBBDE8776B157DAC(::MoleMole::UIAvatarGraphics* a1, ::MoleMole::UIAvatarLightSetting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_BBBDE8776B157DAC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BBBDE8776B157DAC_1(::MoleMole::UIAvatarGraphics* a1, ::MoleMole::UIAvatarLightSetting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarGraphics*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_BBBDE8776B157DAC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::Enum_3_BB702611CCC85D7E Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_BB702611CCC85D7E(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_EB44EFCB44CBA9C1()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_EB44EFCB44CBA9C1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_096C38E5BF16E495(::Foundation::AssetPath a1, ::Class_1_98B7A76C378FB1D8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::Class_1_98B7A76C378FB1D8*))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_096C38E5BF16E495_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_F0A86D68E04AD132(::UnityEngine::Camera* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_F0A86D68E04AD132_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_1_0C60A530AA0118C2()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_METHOD_1_0C60A530AA0118C2_OFFSET))(this);
	}
};
