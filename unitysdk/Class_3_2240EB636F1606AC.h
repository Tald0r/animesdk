#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_503;
class Class_2_D0C558C56591C3D1;
class Class_3_3B9412253A0E3E79;
class Class_3_883E597458B91E77;
class Class_3_BD1C1745FBC83F51;
class Class_3_D3DDAA6C0FFE6434_1;
class Class_3_F11DDE54D3723348;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class RenderMaterial; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2240EB636F1606AC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x72D5BD0)
#define CLASS_3_2240EB636F1606AC_METHOD_3_0E63783AAD13A6B2_OFFSET UNITYSDK_OFFSET(0x72D62D0)
#define CLASS_3_2240EB636F1606AC_METHOD_3_107E3383049E312F_OFFSET UNITYSDK_OFFSET(0x72D69D0)
#define CLASS_3_2240EB636F1606AC_METHOD_3_1A3065CD35015836_OFFSET UNITYSDK_OFFSET(0x72DA2C0)
#define CLASS_3_2240EB636F1606AC_METHOD_3_27ADCCDE7A11CC5E_OFFSET UNITYSDK_OFFSET(0x72D8420)
#define CLASS_3_2240EB636F1606AC_METHOD_3_362C8D6D4E665A3A_OFFSET UNITYSDK_OFFSET(0x72D7100)
#define CLASS_3_2240EB636F1606AC_METHOD_3_3845301F5777B27A_OFFSET UNITYSDK_OFFSET(0x72D9710)
#define CLASS_3_2240EB636F1606AC_METHOD_3_418C74C0FE5EA796_OFFSET UNITYSDK_OFFSET(0x72D6160)
#define CLASS_3_2240EB636F1606AC_METHOD_3_42F4A6AAFCF440F3_OFFSET UNITYSDK_OFFSET(0x72D7A20)
#define CLASS_3_2240EB636F1606AC_METHOD_3_443A2FC7CA692DDC_OFFSET UNITYSDK_OFFSET(0x72D7940)
#define CLASS_3_2240EB636F1606AC_METHOD_3_60069FCD99486CD7_OFFSET UNITYSDK_OFFSET(0x72D9510)
#define CLASS_3_2240EB636F1606AC_METHOD_3_6B5CCD1402754FDC_OFFSET UNITYSDK_OFFSET(0x72D7600)
#define CLASS_3_2240EB636F1606AC_METHOD_3_73DC75BDC3CBFC2B_OFFSET UNITYSDK_OFFSET(0x72D7F00)
#define CLASS_3_2240EB636F1606AC_METHOD_3_7F90DEB49EB81C62_OFFSET UNITYSDK_OFFSET(0x72DA190)
#define CLASS_3_2240EB636F1606AC_METHOD_3_86D037D80DD065C8_OFFSET UNITYSDK_OFFSET(0x72D9A10)
#define CLASS_3_2240EB636F1606AC_METHOD_3_92E4F8A5AE75B75B_OFFSET UNITYSDK_OFFSET(0x72D8AF0)
#define CLASS_3_2240EB636F1606AC_METHOD_3_9302DAD58B86F6B5_OFFSET UNITYSDK_OFFSET(0x72D9580)
#define CLASS_3_2240EB636F1606AC_METHOD_3_A12AA632AA7E22B2_OFFSET UNITYSDK_OFFSET(0x72D63C0)
#define CLASS_3_2240EB636F1606AC_METHOD_3_A2A6DF7A6EB0F5EE_OFFSET UNITYSDK_OFFSET(0x72D8720)
#define CLASS_3_2240EB636F1606AC_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x72D94A0)
#define CLASS_3_2240EB636F1606AC_METHOD_3_BF70D8E403E3E02C_OFFSET UNITYSDK_OFFSET(0x72D6690)
#define CLASS_3_2240EB636F1606AC_METHOD_3_C30E29F78DDC8B7A_OFFSET UNITYSDK_OFFSET(0x72D8D10)
#define CLASS_3_2240EB636F1606AC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x72DA260)
#define CLASS_3_2240EB636F1606AC_METHOD_3_CAAF45489FCE8C3E_OFFSET UNITYSDK_OFFSET(0x72D8350)
#define CLASS_3_2240EB636F1606AC_METHOD_3_D39845A01CA8856D_OFFSET UNITYSDK_OFFSET(0x72DA570)
#define CLASS_3_2240EB636F1606AC_METHOD_3_D703EC05EA51B7DC_OFFSET UNITYSDK_OFFSET(0x72D6B70)
#define CLASS_3_2240EB636F1606AC_METHOD_3_E634CB140D87C346_OFFSET UNITYSDK_OFFSET(0x72D7FE0)
#define CLASS_3_2240EB636F1606AC_METHOD_3_F08FBBB01BDACB8D_OFFSET UNITYSDK_OFFSET(0x72D6080)
#define CLASS_3_2240EB636F1606AC_METHOD_3_FAE4A5DA2A21FACA_OFFSET UNITYSDK_OFFSET(0x72D8A20)
#define CLASS_3_2240EB636F1606AC_METHOD_3_FBF1E51A71992E91_OFFSET UNITYSDK_OFFSET(0x72D8FE0)
#define CLASS_3_2240EB636F1606AC_METHOD_3_FE72532B8D25C4ED_OFFSET UNITYSDK_OFFSET(0x72D7DB0)
#define CLASS_3_2240EB636F1606AC_UPDATE_OFFSET UNITYSDK_OFFSET(0x72D5F70)
#define CLASS_3_2240EB636F1606AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x72D6030)
#define CLASS_3_2240EB636F1606AC__CTOR_OFFSET UNITYSDK_OFFSET(0x72D6010)

inline static constexpr unsigned int Class_3_2240EB636F1606AC_TypeDefinitionIndex = 44421;

class Class_3_2240EB636F1606AC : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::String** StaticGet_Field_3_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2240EB636F1606AC_TypeDefinitionIndex)->GetStaticField(0x37460);
	}
	static ::System::String** StaticGet_Field_3_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_2240EB636F1606AC_TypeDefinitionIndex)->GetStaticField(0x37468);
	}
	::System::Action_5<::Class_3_F11DDE54D3723348*, ::Class_3_883E597458B91E77*, ::Class_3_F35B080B137ECC46*, ::Class_3_BD1C1745FBC83F51*, ::Class_3_3B9412253A0E3E79*>* Field_3_4; // 0x20
	::Class_2_D0C558C56591C3D1* Field_3_1; // 0x28
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_F08FBBB01BDACB8D(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_F08FBBB01BDACB8D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_418C74C0FE5EA796(::Class_3_F11DDE54D3723348* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_F11DDE54D3723348*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_418C74C0FE5EA796_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0E63783AAD13A6B2(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_0E63783AAD13A6B2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A12AA632AA7E22B2(::Class_3_F11DDE54D3723348* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_F11DDE54D3723348*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_A12AA632AA7E22B2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BF70D8E403E3E02C(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_BF70D8E403E3E02C_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_3_362C8D6D4E665A3A(::Class_3_D3DDAA6C0FFE6434_1* a1, ::System::String* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::Class_3_D3DDAA6C0FFE6434_1*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_362C8D6D4E665A3A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6B5CCD1402754FDC(::Class_3_F11DDE54D3723348* a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_F11DDE54D3723348*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_6B5CCD1402754FDC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_443A2FC7CA692DDC(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_443A2FC7CA692DDC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_107E3383049E312F(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::String* a5, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a6, ::System::Boolean a7, ::MoleMole::Battle::MaterialPropertyModifierExtraParams a8)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Boolean, ::MoleMole::Battle::MaterialPropertyModifierExtraParams))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_107E3383049E312F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_42F4A6AAFCF440F3(::Class_3_F35B080B137ECC46* a1, ::Class_3_BD1C1745FBC83F51* a2, ::Class_3_3B9412253A0E3E79* a3)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_BD1C1745FBC83F51*, ::Class_3_3B9412253A0E3E79*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_42F4A6AAFCF440F3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_FE72532B8D25C4ED(::Class_3_F35B080B137ECC46* a1, ::Class_3_3B9412253A0E3E79* a2, ::Class_3_BD1C1745FBC83F51* a3)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_3B9412253A0E3E79*, ::Class_3_BD1C1745FBC83F51*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_FE72532B8D25C4ED_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_E634CB140D87C346(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_E634CB140D87C346_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CAAF45489FCE8C3E(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_CAAF45489FCE8C3E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_73DC75BDC3CBFC2B(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_73DC75BDC3CBFC2B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_27ADCCDE7A11CC5E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_27ADCCDE7A11CC5E_OFFSET))(a1);
	}

	::System::Void Method_3_A2A6DF7A6EB0F5EE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_A2A6DF7A6EB0F5EE_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_FAE4A5DA2A21FACA(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_FAE4A5DA2A21FACA_OFFSET))(a1, a2);
	}

	::System::Void Method_3_92E4F8A5AE75B75B(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_92E4F8A5AE75B75B_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_C30E29F78DDC8B7A(::Class_3_F11DDE54D3723348* a1)
	{
		return ((::System::Void(*)(::Class_3_F11DDE54D3723348*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_C30E29F78DDC8B7A_OFFSET))(a1);
	}

	static ::MoleMole::Battle::Entity* Method_3_D703EC05EA51B7DC(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6, ::System::String* a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_D703EC05EA51B7DC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_3_FBF1E51A71992E91(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_FBF1E51A71992E91_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_60069FCD99486CD7(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_60069FCD99486CD7_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_9302DAD58B86F6B5(::Class_3_F11DDE54D3723348* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_F11DDE54D3723348*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_9302DAD58B86F6B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3845301F5777B27A(::Class_3_F11DDE54D3723348* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_F11DDE54D3723348*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_3845301F5777B27A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_86D037D80DD065C8(::Class_2_208CC9941471731A_503* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_503*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_86D037D80DD065C8_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_1A3065CD35015836(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_1A3065CD35015836_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F90DEB49EB81C62(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_7F90DEB49EB81C62_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D39845A01CA8856D(::Class_3_F11DDE54D3723348* a1, ::Class_3_883E597458B91E77* a2, ::Class_3_F35B080B137ECC46* a3, ::Class_3_BD1C1745FBC83F51* a4, ::Class_3_3B9412253A0E3E79* a5)
	{
		return ((::System::Void(*)(::Class_3_F11DDE54D3723348*, ::Class_3_883E597458B91E77*, ::Class_3_F35B080B137ECC46*, ::Class_3_BD1C1745FBC83F51*, ::Class_3_3B9412253A0E3E79*))((::PBYTE)hIl2Cpp + CLASS_3_2240EB636F1606AC_METHOD_3_D39845A01CA8856D_OFFSET))(a1, a2, a3, a4, a5);
	}
};
