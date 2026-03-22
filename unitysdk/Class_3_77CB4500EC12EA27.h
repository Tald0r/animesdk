#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_77CB4500EC12EA27_Struct_2_04EE0A3341480476_5.h"
#include "unitysdk/Class_3_77CB4500EC12EA27_Struct_2_F7C243F317D8E44A_3.h"

class Class_1_82297B6AFFE49354_1;
class Class_1_CA393D2401CE0314;
class Class_1_FD97D7F2D0A87B2D;
class Class_2_1D144748B0C0612C_1;
class Class_2_208CC9941471731A_972;
class Class_2_3041491E87EDD6BE;
class Class_2_32520919786CA466;
class Class_3_D85E5E0CE519F26A;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_77CB4500EC12EA27_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xC576200)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_22CDD5C4C3890601_OFFSET UNITYSDK_OFFSET(0xC577860)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_2432311F40A5A67D_OFFSET UNITYSDK_OFFSET(0xC576C00)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_468C7E56F0523E04_OFFSET UNITYSDK_OFFSET(0xC576B90)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_4943520282DE05FC_OFFSET UNITYSDK_OFFSET(0xC578D90)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_83DB59FC1F24D655_OFFSET UNITYSDK_OFFSET(0xC579580)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_99026A62B446F5CE_OFFSET UNITYSDK_OFFSET(0xC576660)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_AF3C4CF207018C1B_OFFSET UNITYSDK_OFFSET(0xC578F80)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_B9872C68271F11C5_OFFSET UNITYSDK_OFFSET(0xC576870)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xC57A140)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_C7F2057DDA569B70_OFFSET UNITYSDK_OFFSET(0xC5779E0)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC579520)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_CAA2A441FA9D571E_OFFSET UNITYSDK_OFFSET(0xC579F90)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_CDF81FCBB79FBE89_OFFSET UNITYSDK_OFFSET(0xC578070)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_D3B8DD9112484CAA_OFFSET UNITYSDK_OFFSET(0xC579370)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_DB7B53C6FB418A55_OFFSET UNITYSDK_OFFSET(0xC5793E0)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_E2566A8A6C12159E_OFFSET UNITYSDK_OFFSET(0xC577D80)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_E888D2136A25678A_OFFSET UNITYSDK_OFFSET(0xC578800)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_EF3E53C2DBA3496E_OFFSET UNITYSDK_OFFSET(0xC576D20)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_F379DF9E1B03F0A8_OFFSET UNITYSDK_OFFSET(0xC579700)
#define CLASS_3_77CB4500EC12EA27_METHOD_3_F7FB8B095057B1A4_OFFSET UNITYSDK_OFFSET(0xC5783E0)
#define CLASS_3_77CB4500EC12EA27_UPDATE_OFFSET UNITYSDK_OFFSET(0xC576430)
#define CLASS_3_77CB4500EC12EA27__CCTOR_OFFSET UNITYSDK_OFFSET(0xC5765D0)
#define CLASS_3_77CB4500EC12EA27__CTOR_OFFSET UNITYSDK_OFFSET(0xC5765B0)

inline static constexpr unsigned int Class_3_77CB4500EC12EA27_TypeDefinitionIndex = 62652;

class Class_3_77CB4500EC12EA27 : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_FD97D7F2D0A87B2D*>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::List_1<::Class_1_FD97D7F2D0A87B2D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_77CB4500EC12EA27_TypeDefinitionIndex)->GetStaticField(0x3FA20);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_99026A62B446F5CE(::Class_3_D85E5E0CE519F26A* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_99026A62B446F5CE_OFFSET))(a1, a2);
	}

	::Class_2_3041491E87EDD6BE* Method_3_B9872C68271F11C5(::Class_2_208CC9941471731A_972* a1)
	{
		return ((::Class_2_3041491E87EDD6BE*(*)(::PVOID, ::Class_2_208CC9941471731A_972*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_B9872C68271F11C5_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_3_EF3E53C2DBA3496E(::Class_3_D85E5E0CE519F26A* a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Int32(*)(::Class_3_D85E5E0CE519F26A*, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_EF3E53C2DBA3496E_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_C7F2057DDA569B70(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_C7F2057DDA569B70_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_F7FB8B095057B1A4(::Class_3_77CB4500EC12EA27_Struct_2_F7C243F317D8E44A_3& a1, ::Class_3_77CB4500EC12EA27_Struct_2_04EE0A3341480476_5& a2)
	{
		return ((::System::Void(*)(::Class_3_77CB4500EC12EA27_Struct_2_F7C243F317D8E44A_3&, ::Class_3_77CB4500EC12EA27_Struct_2_04EE0A3341480476_5&))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_F7FB8B095057B1A4_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CDF81FCBB79FBE89(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_CDF81FCBB79FBE89_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_E888D2136A25678A(::Class_3_D85E5E0CE519F26A* a1, ::Class_1_CA393D2401CE0314* a2)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*, ::Class_1_CA393D2401CE0314*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_E888D2136A25678A_OFFSET))(a1, a2);
	}

	::System::Void Method_3_D3B8DD9112484CAA(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_D3B8DD9112484CAA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_DB7B53C6FB418A55(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_DB7B53C6FB418A55_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_3041491E87EDD6BE* Method_3_22CDD5C4C3890601(::System::Collections::Generic::List_1<::Class_2_3041491E87EDD6BE*>* a1)
	{
		return ((::Class_2_3041491E87EDD6BE*(*)(::System::Collections::Generic::List_1<::Class_2_3041491E87EDD6BE*>*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_22CDD5C4C3890601_OFFSET))(a1);
	}

	static ::System::Void Method_3_83DB59FC1F24D655(::Class_3_D85E5E0CE519F26A* a1)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_83DB59FC1F24D655_OFFSET))(a1);
	}

	static ::System::Void Method_3_AF3C4CF207018C1B(::Class_3_D85E5E0CE519F26A* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_AF3C4CF207018C1B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_F379DF9E1B03F0A8(::Class_3_D85E5E0CE519F26A* a1, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354_1*>* a2)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*, ::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354_1*>*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_F379DF9E1B03F0A8_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_3_CAA2A441FA9D571E(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_CAA2A441FA9D571E_OFFSET))(a1, a2, a3);
	}

	::Class_2_1D144748B0C0612C_1* Method_3_468C7E56F0523E04(::Class_2_208CC9941471731A_972* a1)
	{
		return ((::Class_2_1D144748B0C0612C_1*(*)(::PVOID, ::Class_2_208CC9941471731A_972*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_468C7E56F0523E04_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_4943520282DE05FC(::Class_3_D85E5E0CE519F26A* a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4, ::System::Collections::Generic::List_1<::System::Int32>*& a5)
	{
		return ((::System::Void(*)(::Class_3_D85E5E0CE519F26A*, ::System::Int32&, ::System::Int32&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_4943520282DE05FC_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_E2566A8A6C12159E(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_E2566A8A6C12159E_OFFSET))(this, a1, a2);
	}

	::Class_2_32520919786CA466* Method_3_2432311F40A5A67D(::Class_2_208CC9941471731A_972* a1)
	{
		return ((::Class_2_32520919786CA466*(*)(::PVOID, ::Class_2_208CC9941471731A_972*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_2432311F40A5A67D_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_77CB4500EC12EA27_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
