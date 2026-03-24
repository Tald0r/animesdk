#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BB024667087A129E.h"
#include "unitysdk/Enum_3_BB702611CCC85D7E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"

class Class_1_0A48C0117A1B22E8;
class Class_1_D80D6A1CD3EC8E42;
class Class_2_C2B4B123B5A9B78A;
namespace Foundation { class IAssetPool; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeProfile; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define CLASS_1_670407D8BF6E118E_METHOD_1_0C80E2151544F9A3_OFFSET UNITYSDK_OFFSET(0x9C2DBF0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_19A7FC6D7836BFD6_OFFSET UNITYSDK_OFFSET(0x9C2F6E0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x9C2ED60)
#define CLASS_1_670407D8BF6E118E_METHOD_1_301B9899FABEB494_OFFSET UNITYSDK_OFFSET(0x9C2D7F0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_31EA9050E0F34036_OFFSET UNITYSDK_OFFSET(0x9C2C310)
#define CLASS_1_670407D8BF6E118E_METHOD_1_3843E426E798AEB5_OFFSET UNITYSDK_OFFSET(0x9C30AE0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_3A5675546C5AD0BA_OFFSET UNITYSDK_OFFSET(0x9C2D6A0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x9C2DEA0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x9C2F000)
#define CLASS_1_670407D8BF6E118E_METHOD_1_4A1B7A2ADB318447_OFFSET UNITYSDK_OFFSET(0x9C2F550)
#define CLASS_1_670407D8BF6E118E_METHOD_1_4B3D27B1EAE9C878_OFFSET UNITYSDK_OFFSET(0x9C2E660)
#define CLASS_1_670407D8BF6E118E_METHOD_1_4F13B215F669967A_OFFSET UNITYSDK_OFFSET(0x9C2C920)
#define CLASS_1_670407D8BF6E118E_METHOD_1_5B270CDA12499F49_OFFSET UNITYSDK_OFFSET(0x9C2CA90)
#define CLASS_1_670407D8BF6E118E_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x9C301C0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_61F66B4B04709379_OFFSET UNITYSDK_OFFSET(0x9C2D0F0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x9C2D5F0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_6868D59DC39B7029_OFFSET UNITYSDK_OFFSET(0x9C2E130)
#define CLASS_1_670407D8BF6E118E_METHOD_1_7018C17B29AE4141_OFFSET UNITYSDK_OFFSET(0x9C30370)
#define CLASS_1_670407D8BF6E118E_METHOD_1_7B97E6CBC519BFD9_OFFSET UNITYSDK_OFFSET(0x9C2FA10)
#define CLASS_1_670407D8BF6E118E_METHOD_1_7FD4528952FCA268_OFFSET UNITYSDK_OFFSET(0x9C2F0C0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_80B7E22194041A7E_OFFSET UNITYSDK_OFFSET(0x9C2E9A0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_8D2AB96411F361DC_OFFSET UNITYSDK_OFFSET(0x9C30510)
#define CLASS_1_670407D8BF6E118E_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x9C2D260)
#define CLASS_1_670407D8BF6E118E_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9C2E0A0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0x9C30680)
#define CLASS_1_670407D8BF6E118E_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x9C2FB20)
#define CLASS_1_670407D8BF6E118E_METHOD_1_9BD42BD62CA8BD60_OFFSET UNITYSDK_OFFSET(0x9C2FB90)
#define CLASS_1_670407D8BF6E118E_METHOD_1_9C66B07446448FC6_OFFSET UNITYSDK_OFFSET(0x9C2D470)
#define CLASS_1_670407D8BF6E118E_METHOD_1_BA446D4D3EBC6EEF_OFFSET UNITYSDK_OFFSET(0x9C30960)
#define CLASS_1_670407D8BF6E118E_METHOD_1_BB5E4928ABD66C6A_OFFSET UNITYSDK_OFFSET(0x9C2F410)
#define CLASS_1_670407D8BF6E118E_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x9C2E940)
#define CLASS_1_670407D8BF6E118E_METHOD_1_C8065D4F59F4EF02_OFFSET UNITYSDK_OFFSET(0x9C2C410)
#define CLASS_1_670407D8BF6E118E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9C2C2A0)
#define CLASS_1_670407D8BF6E118E_METHOD_1_CB041ED9F0197C0B_OFFSET UNITYSDK_OFFSET(0x9C30020)
#define CLASS_1_670407D8BF6E118E_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x9C2C780)
#define CLASS_1_670407D8BF6E118E_METHOD_1_E2BA179772A840FB_OFFSET UNITYSDK_OFFSET(0x9C2CD20)
#define CLASS_1_670407D8BF6E118E_METHOD_1_E664C2F621CF8891_OFFSET UNITYSDK_OFFSET(0x9C2C500)
#define CLASS_1_670407D8BF6E118E_METHOD_1_F4C8B018D655630D_OFFSET UNITYSDK_OFFSET(0x9C2F170)
#define CLASS_1_670407D8BF6E118E__CTOR_OFFSET UNITYSDK_OFFSET(0x9C2C010)

inline static constexpr unsigned int Class_1_670407D8BF6E118E_TypeDefinitionIndex = 47782;

class Class_1_670407D8BF6E118E : public ::System::Object
{
public:
	static ::Class_1_670407D8BF6E118E** StaticGet_Field_1_3()
	{
		return (::Class_1_670407D8BF6E118E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_670407D8BF6E118E_TypeDefinitionIndex)->GetStaticField(0x40E20);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_670407D8BF6E118E_TypeDefinitionIndex)->GetStaticField(0xFA50);
	}
	// static const ::System::String* Field_1_13; // 0x0
	::UnityEngine::Light* Field_1_7; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_14; // 0x20
	::UnityEngine::Rendering::Volume* Field_1_9; // 0x28
	::System::Collections::Generic::HashSet_1<::Foundation::AssetPath>* Field_1_18; // 0x30
	::UnityEngine::GameObject* Field_1_12; // 0x38
	::System::Collections::Generic::List_1<::Class_1_0A48C0117A1B22E8*>* Field_1_15; // 0x40
	::UnityEngine::GameObject* Field_1_5; // 0x48
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_16; // 0x50
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Field_1_17; // 0x58
	::UnityEngine::Camera* Field_1_2; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>* Field_1_11; // 0x68
	::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* Field_1_8; // 0x70
	::Foundation::IAssetPool* Field_1_19; // 0x78
	::System::Collections::Generic::List_1<::Class_1_D80D6A1CD3EC8E42*>* Field_1_0; // 0x80
	::UnityEngine::Light* Field_1_6; // 0x88
	::UnityEngine::Rendering::Volume* Field_1_10; // 0x90
	::System::Int32 Field_1_20; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E__CTOR_OFFSET))(this);
	}

	::Class_1_D80D6A1CD3EC8E42* Method_1_31EA9050E0F34036(::System::Single a1, ::System::Single a2, ::System::String* a3)
	{
		return ((::Class_1_D80D6A1CD3EC8E42*(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_31EA9050E0F34036_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E664C2F621CF8891(::System::Boolean a1, ::Enum_3_BB702611CCC85D7E a2, ::MoleMole::UIAvatarLightSetting* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_BB702611CCC85D7E, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_E664C2F621CF8891_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::Class_2_C2B4B123B5A9B78A* Method_1_4F13B215F669967A(::System::Single a1, ::System::Single a2, ::System::String* a3, ::System::String* a4, ::Enum_3_BB702611CCC85D7E a5, ::UnityEngine::Experimental::Rendering::GraphicsFormat a6)
	{
		return ((::Class_2_C2B4B123B5A9B78A*(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_4F13B215F669967A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Camera* Method_1_5B270CDA12499F49(::Spine::Unity::SkeletonGraphic* a1)
	{
		return ((::UnityEngine::Camera*(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_5B270CDA12499F49_OFFSET))(this, a1);
	}

	::System::Void Method_1_E2BA179772A840FB(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::Enum_3_BB024667087A129E a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::Enum_3_BB024667087A129E, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_E2BA179772A840FB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9C66B07446448FC6(::Class_1_D80D6A1CD3EC8E42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D80D6A1CD3EC8E42*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_9C66B07446448FC6_OFFSET))(this, a1);
	}

	::System::Void Method_1_3A5675546C5AD0BA(::Foundation::AssetPath a1, ::System::Boolean a2, ::System::Action_1<::UnityEngine::GameObject*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::Action_1<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_3A5675546C5AD0BA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0C80E2151544F9A3(::UnityEngine::GameObject* a1, ::Enum_3_BB702611CCC85D7E a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_0C80E2151544F9A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_6868D59DC39B7029(::System::String* a1, ::Enum_3_BB702611CCC85D7E a2)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_6868D59DC39B7029_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::UnityEngine::Rendering::VolumeProfile* Method_1_80B7E22194041A7E(::System::String* a1)
	{
		return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_80B7E22194041A7E_OFFSET))(this, a1);
	}

	::System::Void Method_1_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_24B05D2E15A5C3C8_OFFSET))(this);
	}

	static ::Class_1_670407D8BF6E118E* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_670407D8BF6E118E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_47FCE72550F759BF_OFFSET))();
	}

	::System::Int32 Method_1_C8065D4F59F4EF02()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_C8065D4F59F4EF02_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7FD4528952FCA268(::System::Int32 a1, ::System::Boolean a2, ::System::Action_1<::UnityEngine::GameObject*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_7FD4528952FCA268_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_640514F2FC7A7607(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_640514F2FC7A7607_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4C8B018D655630D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_F4C8B018D655630D_OFFSET))(this);
	}

	::UnityEngine::Rendering::Volume* Method_1_BB5E4928ABD66C6A(::Enum_3_BB702611CCC85D7E a1)
	{
		return ((::UnityEngine::Rendering::Volume*(*)(::PVOID, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_BB5E4928ABD66C6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A1B7A2ADB318447(::System::String* a1, ::Enum_3_BB702611CCC85D7E a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_4A1B7A2ADB318447_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_19A7FC6D7836BFD6(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2, ::System::Action_2<::UnityEngine::GameObject*, ::Foundation::AssetPath>* a3, ::System::Action_1<::Foundation::AssetPath>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Action_2<::UnityEngine::GameObject*, ::Foundation::AssetPath>*, ::System::Action_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_19A7FC6D7836BFD6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_7B97E6CBC519BFD9(::System::Boolean a1, ::Enum_3_BB702611CCC85D7E a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_7B97E6CBC519BFD9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_301B9899FABEB494(::Foundation::AssetPath a1, ::System::Boolean a2, ::UnityEngine::Transform* a3, ::System::Action_2<::UnityEngine::GameObject*, ::Foundation::AssetPath>* a4, ::System::Action_1<::Foundation::AssetPath>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::UnityEngine::Transform*, ::System::Action_2<::UnityEngine::GameObject*, ::Foundation::AssetPath>*, ::System::Action_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_301B9899FABEB494_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_9BD42BD62CA8BD60(::Class_1_0A48C0117A1B22E8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A48C0117A1B22E8*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_9BD42BD62CA8BD60_OFFSET))(this, a1);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::Class_2_C2B4B123B5A9B78A* Method_1_7018C17B29AE4141(::System::String* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::GameObject* a4, ::UnityEngine::GameObject* a5, ::System::String* a6, ::System::Boolean a7, ::Enum_3_BB702611CCC85D7E a8)
	{
		return ((::Class_2_C2B4B123B5A9B78A*(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_7018C17B29AE4141_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_1_CB041ED9F0197C0B(::System::UInt32 a1, ::Class_1_0A48C0117A1B22E8*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_0A48C0117A1B22E8*&))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_CB041ED9F0197C0B_OFFSET))(this, a1, a2);
	}

	::Class_2_C2B4B123B5A9B78A* Method_1_8D2AB96411F361DC(::System::Single a1, ::System::Single a2, ::System::String* a3, ::System::String* a4, ::Enum_3_BB702611CCC85D7E a5, ::System::Boolean a6)
	{
		return ((::Class_2_C2B4B123B5A9B78A*(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::Enum_3_BB702611CCC85D7E, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_8D2AB96411F361DC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4B3D27B1EAE9C878(::UnityEngine::GameObject* a1, ::System::String* a2, ::Enum_3_BB702611CCC85D7E a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_4B3D27B1EAE9C878_OFFSET))(this, a1, a2, a3);
	}

	::Foundation::IAssetPool* Method_1_61F66B4B04709379()
	{
		return ((::Foundation::IAssetPool*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_61F66B4B04709379_OFFSET))(this);
	}

	::System::Void Method_1_96980C17A8BB1F06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_96980C17A8BB1F06_OFFSET))(this);
	}

	::System::Void Method_1_BA446D4D3EBC6EEF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_BA446D4D3EBC6EEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_3843E426E798AEB5(::System::String* a1, ::Enum_3_BB702611CCC85D7E a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_BB702611CCC85D7E))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_METHOD_1_3843E426E798AEB5_OFFSET))(this, a1, a2);
	}
};
