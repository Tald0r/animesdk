#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2AD007055AA355A8;
class Class_3_32CD10484486A703;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class UIInLevelGuideChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_887CA63EE4A21E60_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x64446C0)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_025C10A50003DFAB_OFFSET UNITYSDK_OFFSET(0x6445160)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_138FB0876437E13A_OFFSET UNITYSDK_OFFSET(0x6446400)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_3E5C2F618819AA49_OFFSET UNITYSDK_OFFSET(0x6448260)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_526DE5EF5895AF0D_OFFSET UNITYSDK_OFFSET(0x6446590)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x6445990)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_6C575FECD9E37788_OFFSET UNITYSDK_OFFSET(0x6447410)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_7193A8D2BD222E73_OFFSET UNITYSDK_OFFSET(0x6447880)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_7C70BF50A56DD125_OFFSET UNITYSDK_OFFSET(0x6447BD0)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_7EE99EE6AA394745_OFFSET UNITYSDK_OFFSET(0x64479D0)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_7F657B61166A1DFC_OFFSET UNITYSDK_OFFSET(0x6445450)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_85D0FC6586C8F005_OFFSET UNITYSDK_OFFSET(0x64462E0)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_8660C3A27B56FE60_OFFSET UNITYSDK_OFFSET(0x6446030)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_8CC7428A4822B88C_OFFSET UNITYSDK_OFFSET(0x64466E0)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_8D4903B042636997_OFFSET UNITYSDK_OFFSET(0x6444B60)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_951D499F29F566A6_OFFSET UNITYSDK_OFFSET(0x6446F00)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_9D98D4947F30AE20_OFFSET UNITYSDK_OFFSET(0x64459F0)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_AA7B5EEAC4068D02_OFFSET UNITYSDK_OFFSET(0x6445DC0)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_AB08607F71FB9ADA_OFFSET UNITYSDK_OFFSET(0x64471F0)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_AC9471A0B9837F12_OFFSET UNITYSDK_OFFSET(0x64477D0)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x6445FC0)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_C23EBAAFFAC9C76E_OFFSET UNITYSDK_OFFSET(0x6447740)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_C5A45EC347147FEF_OFFSET UNITYSDK_OFFSET(0x64483E0)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_C651100A24EA29C2_OFFSET UNITYSDK_OFFSET(0x6445380)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_C91720EF8A3C5FAE_OFFSET UNITYSDK_OFFSET(0x6448140)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6448560)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_DED490E0B7706D20_OFFSET UNITYSDK_OFFSET(0x6445B10)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_FA5F1CCE3A1FF70C_OFFSET UNITYSDK_OFFSET(0x6446A00)
#define CLASS_3_887CA63EE4A21E60_METHOD_3_FC82513215416ADD_OFFSET UNITYSDK_OFFSET(0x64468F0)
#define CLASS_3_887CA63EE4A21E60_UPDATE_OFFSET UNITYSDK_OFFSET(0x64449B0)
#define CLASS_3_887CA63EE4A21E60__CCTOR_OFFSET UNITYSDK_OFFSET(0x6444B50)
#define CLASS_3_887CA63EE4A21E60__CTOR_OFFSET UNITYSDK_OFFSET(0x6444B30)

inline static constexpr unsigned int Class_3_887CA63EE4A21E60_TypeDefinitionIndex = 47339;

class Class_3_887CA63EE4A21E60 : public ::Class_2_F33340E023067DAF
{
public:
	static ::MoleMole::UIInLevelGuideChildWindowController** StaticGet_Field_3_2()
	{
		return (::MoleMole::UIInLevelGuideChildWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_3_887CA63EE4A21E60_TypeDefinitionIndex)->GetStaticField(0x34FE0);
	}
	static ::MoleMole::Config::GuidePoint_AutoGenStrategy* StaticGet_Field_3_1()
	{
		return (::MoleMole::Config::GuidePoint_AutoGenStrategy*)Il2CppClass::FromTypeDefinitionIndex(Class_3_887CA63EE4A21E60_TypeDefinitionIndex)->GetStaticField(0x34FE8);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_UPDATE_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_3_8D4903B042636997(::Class_3_32CD10484486A703* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_32CD10484486A703*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_8D4903B042636997_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_025C10A50003DFAB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_025C10A50003DFAB_OFFSET))(a1);
	}

	static ::System::Void Method_3_C651100A24EA29C2(::Class_3_F35B080B137ECC46* a1, ::Class_3_32CD10484486A703* a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_C651100A24EA29C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F657B61166A1DFC(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2AD007055AA355A8*>* a5)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2AD007055AA355A8*>*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_7F657B61166A1DFC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	static ::System::String* Method_3_9D98D4947F30AE20(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::String*(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_9D98D4947F30AE20_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_DED490E0B7706D20(::Class_3_32CD10484486A703* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_32CD10484486A703*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_DED490E0B7706D20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AA7B5EEAC4068D02(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_AA7B5EEAC4068D02_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8660C3A27B56FE60(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_8660C3A27B56FE60_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_85D0FC6586C8F005(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Boolean(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_85D0FC6586C8F005_OFFSET))(a1);
	}

	static ::System::Void Method_3_138FB0876437E13A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_138FB0876437E13A_OFFSET))(a1);
	}

	static ::System::Void Method_3_526DE5EF5895AF0D(::Class_3_32CD10484486A703* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_526DE5EF5895AF0D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FC82513215416ADD(::Class_3_32CD10484486A703* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_FC82513215416ADD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FA5F1CCE3A1FF70C(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_FA5F1CCE3A1FF70C_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_951D499F29F566A6(::Class_3_32CD10484486A703* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Int32(*)(::Class_3_32CD10484486A703*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_951D499F29F566A6_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_2AD007055AA355A8* Method_3_AB08607F71FB9ADA(::Class_3_32CD10484486A703* a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::Class_1_2AD007055AA355A8*(*)(::Class_3_32CD10484486A703*, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_AB08607F71FB9ADA_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_6C575FECD9E37788(::Class_3_32CD10484486A703* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_6C575FECD9E37788_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AC9471A0B9837F12(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_AC9471A0B9837F12_OFFSET))(a1);
	}

	static ::System::Void Method_3_7193A8D2BD222E73(::Class_3_32CD10484486A703* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_7193A8D2BD222E73_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7EE99EE6AA394745(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_7EE99EE6AA394745_OFFSET))(a1);
	}

	static ::System::Void Method_3_C23EBAAFFAC9C76E(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_C23EBAAFFAC9C76E_OFFSET))(a1);
	}

	static ::System::Void Method_3_8CC7428A4822B88C(::Class_3_32CD10484486A703* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_8CC7428A4822B88C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_7C70BF50A56DD125(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2AD007055AA355A8*>* a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2AD007055AA355A8*>*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_7C70BF50A56DD125_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_3_C91720EF8A3C5FAE(::Class_3_32CD10484486A703* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Int32(*)(::Class_3_32CD10484486A703*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_C91720EF8A3C5FAE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_3E5C2F618819AA49(::Class_3_32CD10484486A703* a1)
	{
		return ((::System::Void(*)(::Class_3_32CD10484486A703*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_3E5C2F618819AA49_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_3_C5A45EC347147FEF(::Class_3_32CD10484486A703* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_32CD10484486A703*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_C5A45EC347147FEF_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_887CA63EE4A21E60_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
