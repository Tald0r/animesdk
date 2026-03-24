#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/Config/TextureSheetInterruptType.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/MoleMole/TextureSheetType.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_FF870BBAEF08CB0B_2;
class Class_3_41E4860029D43D9E;
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_DA90296903337120_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x6173120)
#define CLASS_3_DA90296903337120_METHOD_3_0814860149814FAA_OFFSET UNITYSDK_OFFSET(0x6176670)
#define CLASS_3_DA90296903337120_METHOD_3_1879B6A027FFBD8A_OFFSET UNITYSDK_OFFSET(0x6173DF0)
#define CLASS_3_DA90296903337120_METHOD_3_4BFA336F3125D9F4_OFFSET UNITYSDK_OFFSET(0x61748B0)
#define CLASS_3_DA90296903337120_METHOD_3_566C2E8654887332_OFFSET UNITYSDK_OFFSET(0x6174760)
#define CLASS_3_DA90296903337120_METHOD_3_58200C3ACE25844D_OFFSET UNITYSDK_OFFSET(0x6176300)
#define CLASS_3_DA90296903337120_METHOD_3_7FA34EBF4523E9D0_OFFSET UNITYSDK_OFFSET(0x61749E0)
#define CLASS_3_DA90296903337120_METHOD_3_9A87035C9CF21A2F_OFFSET UNITYSDK_OFFSET(0x61747D0)
#define CLASS_3_DA90296903337120_METHOD_3_9D6D482D0D66151C_1_OFFSET UNITYSDK_OFFSET(0x6177740)
#define CLASS_3_DA90296903337120_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x6174700)
#define CLASS_3_DA90296903337120_METHOD_3_9D7CDEA41085C6F1_OFFSET UNITYSDK_OFFSET(0x6174510)
#define CLASS_3_DA90296903337120_METHOD_3_9ED4D7F0D8562604_OFFSET UNITYSDK_OFFSET(0x6175670)
#define CLASS_3_DA90296903337120_METHOD_3_B6CD1C063E18EA8A_OFFSET UNITYSDK_OFFSET(0x6176530)
#define CLASS_3_DA90296903337120_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x61777A0)
#define CLASS_3_DA90296903337120_METHOD_3_C0C1E9158292D767_OFFSET UNITYSDK_OFFSET(0x6174040)
#define CLASS_3_DA90296903337120_METHOD_3_C1199B12EC8CD679_OFFSET UNITYSDK_OFFSET(0x6176D60)
#define CLASS_3_DA90296903337120_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6177280)
#define CLASS_3_DA90296903337120_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6174980)
#define CLASS_3_DA90296903337120_METHOD_3_D8E203FCAA077E04_OFFSET UNITYSDK_OFFSET(0x61751D0)
#define CLASS_3_DA90296903337120_METHOD_3_D90235FD0BBA8B42_OFFSET UNITYSDK_OFFSET(0x6173700)
#define CLASS_3_DA90296903337120_METHOD_3_DA28D0577F84872E_OFFSET UNITYSDK_OFFSET(0x61772E0)
#define CLASS_3_DA90296903337120_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6173650)
#define CLASS_3_DA90296903337120_UPDATE_OFFSET UNITYSDK_OFFSET(0x61734D0)
#define CLASS_3_DA90296903337120__CTOR_OFFSET UNITYSDK_OFFSET(0x61736E0)

inline static constexpr unsigned int Class_3_DA90296903337120_TypeDefinitionIndex = 69633;

class Class_3_DA90296903337120 : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::ScreenPlayer*, ::MoleMole::ScreenPlayer*>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::ScreenPlayer*, ::MoleMole::ScreenPlayer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DA90296903337120_TypeDefinitionIndex)->GetStaticField(0x339D0);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_UPDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_ONDESTROY_OFFSET))(this);
	}

	static ::System::Void Method_3_D90235FD0BBA8B42(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::MoleMole::Config::TextureSheetInterruptType a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::System::Boolean, ::MoleMole::Config::TextureSheetInterruptType))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_D90235FD0BBA8B42_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_566C2E8654887332(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_566C2E8654887332_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* Method_3_1879B6A027FFBD8A(::Class_3_41E4860029D43D9E* a1, ::System::String* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*(*)(::Class_3_41E4860029D43D9E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_1879B6A027FFBD8A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9A87035C9CF21A2F(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_9A87035C9CF21A2F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C0C1E9158292D767(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4, ::MoleMole::Battle::Entity* a5, ::UnityEngine::Transform* a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*, ::System::Int32, ::System::String*, ::System::Boolean, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_C0C1E9158292D767_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_7FA34EBF4523E9D0(::Class_3_41E4860029D43D9E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_41E4860029D43D9E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_7FA34EBF4523E9D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D8E203FCAA077E04(::MoleMole::ScreenPlayer* a1, ::MoleMole::TextureSheetType a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* a4, ::MoleMole::Config::TextureSheetInterruptType a5, ::System::Boolean a6, ::MoleMole::StaticSceneObjectListLoopType a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::MoleMole::ScreenPlayer*, ::MoleMole::TextureSheetType, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::StaticSceneObjectListLoopType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_D8E203FCAA077E04_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_9D7CDEA41085C6F1(::MoleMole::ScreenPlayer* a1, ::System::String* a2, ::System::Boolean a3, ::MoleMole::Config::TextureSheetInterruptType a4)
	{
		return ((::System::Void(*)(::MoleMole::ScreenPlayer*, ::System::String*, ::System::Boolean, ::MoleMole::Config::TextureSheetInterruptType))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_9D7CDEA41085C6F1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_9ED4D7F0D8562604(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::MoleMole::Config::TextureSheetInterruptType a4, ::System::Boolean a5, ::MoleMole::TextureSheetType a6, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* a7, ::MoleMole::StaticSceneObjectListLoopType a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::MoleMole::StaticSceneObjectListLoopType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_9ED4D7F0D8562604_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_3_58200C3ACE25844D(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_58200C3ACE25844D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_B6CD1C063E18EA8A(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3, ::MoleMole::Config::TextureSheetInterruptType a4, ::System::Boolean a5, ::MoleMole::TextureSheetType a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_B6CD1C063E18EA8A_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_0814860149814FAA(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_0814860149814FAA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C1199B12EC8CD679(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_C1199B12EC8CD679_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_DA28D0577F84872E(::Class_3_41E4860029D43D9E* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::Class_3_41E4860029D43D9E*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_DA28D0577F84872E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4BFA336F3125D9F4(::Class_2_FF870BBAEF08CB0B_2* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_2_FF870BBAEF08CB0B_2*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_4BFA336F3125D9F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D6D482D0D66151C_1(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_9D6D482D0D66151C_1_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
