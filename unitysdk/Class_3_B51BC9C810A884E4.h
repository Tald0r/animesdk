#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Nap/NapECS/EcsComponentTask_1.h"
#include "unitysdk/System/Span_1.h"

class Class_3_4D2BC204E8C5F006;
class Class_3_B51BC9C810A884E4_Class_3_F1899338F9BBB1E2;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_3_B51BC9C810A884E4_Class_3_B6136C2F127116DF_18;
template <typename T> class Class_3_B51BC9C810A884E4_Class_3_B6136C2F127116DF_17;
template <typename T> class Class_3_B51BC9C810A884E4_Class_3_B6136C2F127116DF_19;
template <typename T> class Class_3_B51BC9C810A884E4_Class_3_B6136C2F127116DF_20;

#define CLASS_3_B51BC9C810A884E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B42D40)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_03AFFFCB1D4D29D7_1_OFFSET UNITYSDK_OFFSET(0x8B46E10)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_03AFFFCB1D4D29D7_OFFSET UNITYSDK_OFFSET(0x8B45C50)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_05EB3BF5D85E1975_OFFSET UNITYSDK_OFFSET(0x8B43C90)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_0ECC02F80A14F645_OFFSET UNITYSDK_OFFSET(0x8B43170)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_2A6658899FF2F2FF_OFFSET UNITYSDK_OFFSET(0x8B47380)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_5245253E7E7D7790_1_OFFSET UNITYSDK_OFFSET(0x8B47B50)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_5245253E7E7D7790_OFFSET UNITYSDK_OFFSET(0x8B452E0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_57EECF4D5E2E5477_OFFSET UNITYSDK_OFFSET(0x8B46C70)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_59FC00BA2C84E793_OFFSET UNITYSDK_OFFSET(0x8B440B0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_5A54A43841C97366_1_OFFSET UNITYSDK_OFFSET(0x8B47D40)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_5A54A43841C97366_OFFSET UNITYSDK_OFFSET(0x8B47550)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_5EEBE82AC66B153E_OFFSET UNITYSDK_OFFSET(0x8B45A60)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_6A40152ADF1DC054_OFFSET UNITYSDK_OFFSET(0x8B47F80)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_77BE2267C2983737_1_OFFSET UNITYSDK_OFFSET(0x8B458C0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_77BE2267C2983737_OFFSET UNITYSDK_OFFSET(0x8B43D20)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_8111B319D20E05C2_OFFSET UNITYSDK_OFFSET(0x8B437B0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_89557094969AA4AF_OFFSET UNITYSDK_OFFSET(0x8B434B0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_99B3661B2DB0E069_1_OFFSET UNITYSDK_OFFSET(0x8B46970)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_99B3661B2DB0E069_OFFSET UNITYSDK_OFFSET(0x8B43990)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_AF56B65B1D71B5C5_1_OFFSET UNITYSDK_OFFSET(0x8B454D0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_AF56B65B1D71B5C5_OFFSET UNITYSDK_OFFSET(0x8B435B0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_1_OFFSET UNITYSDK_OFFSET(0x8B450F0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_2_OFFSET UNITYSDK_OFFSET(0x8B456D0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_3_OFFSET UNITYSDK_OFFSET(0x8B45E20)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_OFFSET UNITYSDK_OFFSET(0x8B43EC0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_CCE340C7C08119CA_OFFSET UNITYSDK_OFFSET(0x8B43040)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x8B44470)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_D49EE29BF8606D03_OFFSET UNITYSDK_OFFSET(0x8B42E10)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_D7C39D28BBF4A9B4_1_OFFSET UNITYSDK_OFFSET(0x8B47930)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_D7C39D28BBF4A9B4_OFFSET UNITYSDK_OFFSET(0x8B461E0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_E36576B7693CA33C_1_OFFSET UNITYSDK_OFFSET(0x8B47790)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_E36576B7693CA33C_OFFSET UNITYSDK_OFFSET(0x8B43330)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_E84D2BCC37BB5A40_OFFSET UNITYSDK_OFFSET(0x8B465C0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_F4746A25159C2C4B_OFFSET UNITYSDK_OFFSET(0x8B46400)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_FC70CE1031A305EB_OFFSET UNITYSDK_OFFSET(0x8B47910)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_1_OFFSET UNITYSDK_OFFSET(0x8B467A0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_2_OFFSET UNITYSDK_OFFSET(0x8B46FE0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_3_OFFSET UNITYSDK_OFFSET(0x8B471B0)
#define CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_OFFSET UNITYSDK_OFFSET(0x8B46010)
#define CLASS_3_B51BC9C810A884E4__CTOR_OFFSET UNITYSDK_OFFSET(0x8B42960)

inline static constexpr unsigned int Class_3_B51BC9C810A884E4_TypeDefinitionIndex = 60427;

class Class_3_B51BC9C810A884E4 : public ::Class_2_F33340E023067DAF
{
public:
	static ::Class_3_B51BC9C810A884E4** StaticGet_Field_3_0()
	{
		return (::Class_3_B51BC9C810A884E4**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B51BC9C810A884E4_TypeDefinitionIndex)->GetStaticField(0x3BAB0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* Field_3_2; // 0x20
	::Nap::NapECS::EcsComponentTask_1<::Class_3_4D2BC204E8C5F006*> Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_DISPOSE_OFFSET))(this);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_D49EE29BF8606D03(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_D49EE29BF8606D03_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_0ECC02F80A14F645(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_0ECC02F80A14F645_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E36576B7693CA33C(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_E36576B7693CA33C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_AF56B65B1D71B5C5(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_AF56B65B1D71B5C5_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_8111B319D20E05C2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_8111B319D20E05C2_OFFSET))(a1);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_99B3661B2DB0E069(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_99B3661B2DB0E069_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_05EB3BF5D85E1975(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_05EB3BF5D85E1975_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_77BE2267C2983737(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_77BE2267C2983737_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_OFFSET))(a1, a2);
	}

	::System::Span_1<::Foundation::Unreal::FGameplayTagContainer> Method_3_59FC00BA2C84E793(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Span_1<::Foundation::Unreal::FGameplayTagContainer>(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_59FC00BA2C84E793_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_89557094969AA4AF(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Class_3_B51BC9C810A884E4_Class_3_F1899338F9BBB1E2* a3, ::Foundation::Unreal::FGameplayTagContainer& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Class_3_B51BC9C810A884E4_Class_3_F1899338F9BBB1E2*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_89557094969AA4AF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_CD8EB704BDED69B6_OFFSET))(this);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_5245253E7E7D7790(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_5245253E7E7D7790_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AF56B65B1D71B5C5_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_AF56B65B1D71B5C5_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D_2(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_77BE2267C2983737_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_77BE2267C2983737_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_5EEBE82AC66B153E(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagQuery* a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_5EEBE82AC66B153E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_03AFFFCB1D4D29D7(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_03AFFFCB1D4D29D7_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_C6DC95FC693D522D_3(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_C6DC95FC693D522D_3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D7C39D28BBF4A9B4(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_D7C39D28BBF4A9B4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_F4746A25159C2C4B(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_F4746A25159C2C4B_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_3_E84D2BCC37BB5A40(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Int32(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_E84D2BCC37BB5A40_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_1_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_99B3661B2DB0E069_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_99B3661B2DB0E069_1_OFFSET))(a1, a2);
	}

	::Foundation::Unreal::FGameplayTagContainer& Method_3_57EECF4D5E2E5477(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer&(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_57EECF4D5E2E5477_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_3_03AFFFCB1D4D29D7_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTag a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_03AFFFCB1D4D29D7_1_OFFSET))(a1, a2, a3);
	}

	static ::Class_3_B51BC9C810A884E4* Method_3_CCE340C7C08119CA(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::Class_3_B51BC9C810A884E4*(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_CCE340C7C08119CA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_2(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_FD43C14A1C42A844_3(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_FD43C14A1C42A844_3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_2A6658899FF2F2FF(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagQuery* a3)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_2A6658899FF2F2FF_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_5A54A43841C97366(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_5A54A43841C97366_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_E36576B7693CA33C_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_E36576B7693CA33C_1_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt64 Method_3_FC70CE1031A305EB(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2)
	{
		return ((::System::UInt64(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_FC70CE1031A305EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D7C39D28BBF4A9B4_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_D7C39D28BBF4A9B4_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_5245253E7E7D7790_1(::Nap::NapECS::EcsEntity* a1, ::Foundation::Unreal::FGameplayTag a2)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_5245253E7E7D7790_1_OFFSET))(a1, a2);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_5A54A43841C97366_1(::Nap::NapECS::EcsWorld* a1, ::System::UInt32 a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_5A54A43841C97366_1_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Unreal::FGameplayTagContainer Method_3_6A40152ADF1DC054(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B51BC9C810A884E4_METHOD_3_6A40152ADF1DC054_OFFSET))(a1);
	}
};
