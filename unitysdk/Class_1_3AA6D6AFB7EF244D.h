#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/AssetType.h"
#include "unitysdk/System/Object.h"

class Class_1_019870FE224FBE5A;
class Class_1_0D6706375CDAAE8C;
class Class_1_A8C552A044C6C032;
class Class_1_C682C5BA0B1AC838;
namespace Foundation { class AppVersion; }
namespace Foundation { class IAssetPool; }
namespace MoleMole { class IVideoPlayer; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_019433AA5F044915_1_OFFSET UNITYSDK_OFFSET(0x6F1F590)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_019433AA5F044915_2_OFFSET UNITYSDK_OFFSET(0x6F20E60)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_019433AA5F044915_OFFSET UNITYSDK_OFFSET(0x6F1D9E0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_0A1B76A7F8240AAD_OFFSET UNITYSDK_OFFSET(0x6F230C0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_1213C5437552BF2D_OFFSET UNITYSDK_OFFSET(0x6F256A0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_123D02C357BC464C_OFFSET UNITYSDK_OFFSET(0x6F1F8E0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_12BFA42E867DEC39_OFFSET UNITYSDK_OFFSET(0x6F1F240)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_148782076270BFD0_OFFSET UNITYSDK_OFFSET(0x6F1F380)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_1D68E9A6C6AF89F1_OFFSET UNITYSDK_OFFSET(0x6F1D710)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_20E8013D4AB67E17_OFFSET UNITYSDK_OFFSET(0x6F206B0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_2560CAD8AC524680_OFFSET UNITYSDK_OFFSET(0x6F246A0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_28BE81CDD86C7F99_OFFSET UNITYSDK_OFFSET(0x6F1F9C0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_3441E27C09535FD8_OFFSET UNITYSDK_OFFSET(0x6F1DDB0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_412696BC18DA48ED_OFFSET UNITYSDK_OFFSET(0x6F22E60)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x6F24BE0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_4A62B56B6CE1358F_OFFSET UNITYSDK_OFFSET(0x6F1DB50)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_4BBE5E115DB48E82_OFFSET UNITYSDK_OFFSET(0x6F253C0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x6F1FD50)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_54FA3DBE121C483D_OFFSET UNITYSDK_OFFSET(0x6F211B0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x6F22C70)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_5AD64007CF50322E_OFFSET UNITYSDK_OFFSET(0x6F254E0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x6F24B00)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_6274E1366512C35F_OFFSET UNITYSDK_OFFSET(0x6F25080)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x6F23550)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_6839339EBFD8C514_OFFSET UNITYSDK_OFFSET(0x6F232B0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_69A8978E36B65B07_OFFSET UNITYSDK_OFFSET(0x6F21620)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_6CFA736A4D2E317D_OFFSET UNITYSDK_OFFSET(0x6F1D510)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_6EA2FBD5B66BE9F6_OFFSET UNITYSDK_OFFSET(0x6F1D8D0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_73B64B2262C64EC4_OFFSET UNITYSDK_OFFSET(0x6F21D10)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_7C234C695800BD4B_OFFSET UNITYSDK_OFFSET(0x6F1D980)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_7E3C0318CC90CDC0_OFFSET UNITYSDK_OFFSET(0x6F20CE0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_96F955AE7C9B0F10_OFFSET UNITYSDK_OFFSET(0x6F1FFC0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x6F20630)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_9D0B8ADCD8719557_OFFSET UNITYSDK_OFFSET(0x6F251E0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x6F1EF30)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_A682E540F239EE22_OFFSET UNITYSDK_OFFSET(0x6F24500)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_AD3947A02E8EABD9_OFFSET UNITYSDK_OFFSET(0x6F259A0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_B16ABC36A8C2256A_OFFSET UNITYSDK_OFFSET(0x6F228A0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_B7DBE70CB7213AA0_OFFSET UNITYSDK_OFFSET(0x6F200C0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x6F20400)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x6F22450)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BC6F8F029B0FCDEE_OFFSET UNITYSDK_OFFSET(0x6F22EC0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C15D3DC756EBDDA4_OFFSET UNITYSDK_OFFSET(0x6F20FD0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x6F20040)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C79E4F284A6926A5_OFFSET UNITYSDK_OFFSET(0x6F23160)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x6F24910)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE08B9BCAB5BBA6C_OFFSET UNITYSDK_OFFSET(0x6F247C0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE18697B63E52504_1_OFFSET UNITYSDK_OFFSET(0x6F24600)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x6F1FF20)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x6F24C80)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_DB204809798B4B28_OFFSET UNITYSDK_OFFSET(0x6F1F700)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_E0BF330D94B8AB74_OFFSET UNITYSDK_OFFSET(0x6F22680)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x6F25690)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6F24900)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x6F22E00)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x6F1FCF0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x6F25AE0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F41B186524D9B4BE_OFFSET UNITYSDK_OFFSET(0x6F22CD0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x6F23920)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x6F233E0)
#define CLASS_1_3AA6D6AFB7EF244D_METHOD_1_FFDB41E6BD9C64A5_OFFSET UNITYSDK_OFFSET(0x6F23E50)
#define CLASS_1_3AA6D6AFB7EF244D__CCTOR_OFFSET UNITYSDK_OFFSET(0x6F1D440)

inline static constexpr unsigned int Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex = 75906;

class Class_1_3AA6D6AFB7EF244D : public ::System::Object
{
public:
	static ::Foundation::IAssetPool** StaticGet_Field_1_0()
	{
		return (::Foundation::IAssetPool**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex)->GetStaticField(0x30C70);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex)->GetStaticField(0x30C78);
	}
	static ::Foundation::AppVersion** StaticGet_Field_1_6()
	{
		return (::Foundation::AppVersion**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex)->GetStaticField(0x30C80);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex)->GetStaticField(0xBC90);
	}
	static ::System::Boolean* StaticGet_Field_1_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3AA6D6AFB7EF244D_TypeDefinitionIndex)->GetStaticField(0xBC91);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_6CFA736A4D2E317D()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_6CFA736A4D2E317D_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_1D68E9A6C6AF89F1(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_1D68E9A6C6AF89F1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7C234C695800BD4B(::Foundation::IAssetPool* a1)
	{
		return ((::System::Void(*)(::Foundation::IAssetPool*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_7C234C695800BD4B_OFFSET))(a1);
	}

	static ::System::String* Method_1_019433AA5F044915()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_019433AA5F044915_OFFSET))();
	}

	static ::System::String* Method_1_3441E27C09535FD8()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_3441E27C09535FD8_OFFSET))();
	}

	static ::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_A6544B958241856F_OFFSET))();
	}

	static ::System::Void Method_1_12BFA42E867DEC39(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::Foundation::AssetType a4)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::System::Boolean, ::Foundation::AssetType))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_12BFA42E867DEC39_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_019433AA5F044915_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_019433AA5F044915_1_OFFSET))();
	}

	static ::System::Void Method_1_DB204809798B4B28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_DB204809798B4B28_OFFSET))(a1);
	}

	static ::System::Void Method_1_123D02C357BC464C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_123D02C357BC464C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_507A5122CD01412B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Void Method_1_96F955AE7C9B0F10(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_96F955AE7C9B0F10_OFFSET))(a1);
	}

	static ::Class_1_019870FE224FBE5A* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_019870FE224FBE5A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	static ::System::String* Method_1_B7DBE70CB7213AA0(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_B7DBE70CB7213AA0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))();
	}

	static ::Class_1_A8C552A044C6C032* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_A8C552A044C6C032*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Void Method_1_20E8013D4AB67E17()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_20E8013D4AB67E17_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_6EA2FBD5B66BE9F6(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::AssetPath, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_6EA2FBD5B66BE9F6_OFFSET))(a1, a2);
	}

	static ::Foundation::AppVersion* Method_1_4A62B56B6CE1358F()
	{
		return ((::Foundation::AppVersion*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_4A62B56B6CE1358F_OFFSET))();
	}

	static ::System::String* Method_1_019433AA5F044915_2()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_019433AA5F044915_2_OFFSET))();
	}

	static ::System::Void Method_1_C15D3DC756EBDDA4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C15D3DC756EBDDA4_OFFSET))(a1);
	}

	static ::System::Void Method_1_54FA3DBE121C483D(::MoleMole::IVideoPlayer* a1, ::System::String* a2, ::Foundation::AssetRequestHandle& a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::MoleMole::IVideoPlayer*, ::System::String*, ::Foundation::AssetRequestHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_54FA3DBE121C483D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_69A8978E36B65B07(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_69A8978E36B65B07_OFFSET))(a1);
	}

	static ::System::String* Method_1_73B64B2262C64EC4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_73B64B2262C64EC4_OFFSET))();
	}

	static ::System::Void Method_1_148782076270BFD0(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::Foundation::AssetType a4)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean, ::Foundation::AssetType))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_148782076270BFD0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BA1BB49741CFDFE1_OFFSET))();
	}

	static ::System::Void Method_1_E0BF330D94B8AB74(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_E0BF330D94B8AB74_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B16ABC36A8C2256A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_B16ABC36A8C2256A_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Boolean Method_1_F41B186524D9B4BE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F41B186524D9B4BE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0E307B84478A272_1_OFFSET))();
	}

	static ::Foundation::IAssetPool* Method_1_412696BC18DA48ED()
	{
		return ((::Foundation::IAssetPool*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_412696BC18DA48ED_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_BC6F8F029B0FCDEE(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_BC6F8F029B0FCDEE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0A1B76A7F8240AAD(::UnityEngine::Object* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_0A1B76A7F8240AAD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C79E4F284A6926A5(::UnityEngine::GameObject* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C79E4F284A6926A5_OFFSET))(a1, a2);
	}

	static ::System::UInt64 Method_1_6839339EBFD8C514()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_6839339EBFD8C514_OFFSET))();
	}

	static ::System::Void Method_1_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_FD6692A5F6B0AC0C_OFFSET))();
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::System::Void Method_1_FFDB41E6BD9C64A5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_FFDB41E6BD9C64A5_OFFSET))(a1);
	}

	static ::System::Void Method_1_28BE81CDD86C7F99(::System::Boolean a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_28BE81CDD86C7F99_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A682E540F239EE22(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_A682E540F239EE22_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE18697B63E52504_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE18697B63E52504_1_OFFSET))();
	}

	static ::Class_1_0D6706375CDAAE8C* Method_1_2560CAD8AC524680(::System::Int32 a1)
	{
		return ((::Class_1_0D6706375CDAAE8C*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_2560CAD8AC524680_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_CE08B9BCAB5BBA6C(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CE08B9BCAB5BBA6C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_C8E2469222842786_OFFSET))();
	}

	static ::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_5E72916301E347E2_OFFSET))();
	}

	static ::Class_1_C682C5BA0B1AC838* Method_1_7E3C0318CC90CDC0()
	{
		return ((::Class_1_C682C5BA0B1AC838*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_7E3C0318CC90CDC0_OFFSET))();
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_CEBFF096B4C9D46B_OFFSET))();
	}

	static ::System::Void Method_1_F5B4708E7805566C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F5B4708E7805566C_OFFSET))();
	}

	static ::Foundation::AssetRequestHandle Method_1_6274E1366512C35F(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a3)
	{
		return ((::Foundation::AssetRequestHandle(*)(::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_6274E1366512C35F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_4BBE5E115DB48E82()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_4BBE5E115DB48E82_OFFSET))();
	}

	static ::System::String* Method_1_5AD64007CF50322E()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_5AD64007CF50322E_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F0088C88851A7DFB_1_OFFSET))();
	}

	static ::System::Boolean Method_1_1213C5437552BF2D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_1213C5437552BF2D_OFFSET))();
	}

	static ::System::Void Method_1_AD3947A02E8EABD9(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_AD3947A02E8EABD9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F206290BA342BA13()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_F206290BA342BA13_OFFSET))();
	}

	static ::Foundation::AssetRequestHandle Method_1_9D0B8ADCD8719557(::Foundation::AssetPath a1, ::UnityEngine::Transform* a2, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a3)
	{
		return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6D6AFB7EF244D_METHOD_1_9D0B8ADCD8719557_OFFSET))(a1, a2, a3);
	}
};
