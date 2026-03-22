#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_34FEFAEA56768D40;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_5A01EC14E744BD31_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x7AC7010)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_37854AE92C8E73BC_OFFSET UNITYSDK_OFFSET(0x7AC8120)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_46C2535CC7FB8DA8_OFFSET UNITYSDK_OFFSET(0x7AC7380)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_51782FF51852DF2E_OFFSET UNITYSDK_OFFSET(0x7AC8570)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x7AC80B0)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7AC8510)
#define CLASS_3_5A01EC14E744BD31_METHOD_3_F5F0DB8BC00F59D3_OFFSET UNITYSDK_OFFSET(0x7AC8010)
#define CLASS_3_5A01EC14E744BD31_UPDATE_OFFSET UNITYSDK_OFFSET(0x7AC71E0)
#define CLASS_3_5A01EC14E744BD31__CTOR_OFFSET UNITYSDK_OFFSET(0x7AC7360)

inline static constexpr unsigned int Class_3_5A01EC14E744BD31_TypeDefinitionIndex = 62554;

class Class_3_5A01EC14E744BD31 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_46C2535CC7FB8DA8(::System::Single a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_46C2535CC7FB8DA8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_F5F0DB8BC00F59D3(::Class_3_34FEFAEA56768D40* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::Class_3_34FEFAEA56768D40*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_F5F0DB8BC00F59D3_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_37854AE92C8E73BC(::Class_3_34FEFAEA56768D40* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::Class_3_34FEFAEA56768D40*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_37854AE92C8E73BC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_51782FF51852DF2E(::Class_3_34FEFAEA56768D40* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::Class_3_34FEFAEA56768D40*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5A01EC14E744BD31_METHOD_3_51782FF51852DF2E_OFFSET))(a1, a2, a3);
	}
};
