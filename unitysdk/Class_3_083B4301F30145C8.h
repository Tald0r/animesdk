#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_86A85CB5038B7046_Struct_2_5396005F9A53A130.h"
#include "unitysdk/Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/Struct_2_50968EFA8638B3BF.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_175;
class Class_4_7B5A65E248106C68;
class Class_4_B99AA5AE371451AA;
class Class_5_1C775D1A5A638660;
class Class_5_EC49DC305E06FE39;
class Class_5_F638703ACD0FA08E;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_083B4301F30145C8_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xC89B8A0)
#define CLASS_3_083B4301F30145C8_METHOD_3_028B904D81646E73_OFFSET UNITYSDK_OFFSET(0xC89E910)
#define CLASS_3_083B4301F30145C8_METHOD_3_145D78F368B63EDE_OFFSET UNITYSDK_OFFSET(0xC89EF60)
#define CLASS_3_083B4301F30145C8_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xC89F3C0)
#define CLASS_3_083B4301F30145C8_METHOD_3_377E6E8F710C5BB9_OFFSET UNITYSDK_OFFSET(0xC89CFD0)
#define CLASS_3_083B4301F30145C8_METHOD_3_39468678C9BF10F3_OFFSET UNITYSDK_OFFSET(0xC89D120)
#define CLASS_3_083B4301F30145C8_METHOD_3_42340AD55179E540_OFFSET UNITYSDK_OFFSET(0xC89EC90)
#define CLASS_3_083B4301F30145C8_METHOD_3_488B22A0B55DFD1B_OFFSET UNITYSDK_OFFSET(0xC89F100)
#define CLASS_3_083B4301F30145C8_METHOD_3_551D31BFE6A9A3B6_OFFSET UNITYSDK_OFFSET(0xC89EB50)
#define CLASS_3_083B4301F30145C8_METHOD_3_5C0F4CFE9C6CAB7B_1_OFFSET UNITYSDK_OFFSET(0xC89CA20)
#define CLASS_3_083B4301F30145C8_METHOD_3_5C0F4CFE9C6CAB7B_2_OFFSET UNITYSDK_OFFSET(0xC89D110)
#define CLASS_3_083B4301F30145C8_METHOD_3_5C0F4CFE9C6CAB7B_3_OFFSET UNITYSDK_OFFSET(0xC89D450)
#define CLASS_3_083B4301F30145C8_METHOD_3_5C0F4CFE9C6CAB7B_4_OFFSET UNITYSDK_OFFSET(0xC89EB40)
#define CLASS_3_083B4301F30145C8_METHOD_3_5C0F4CFE9C6CAB7B_OFFSET UNITYSDK_OFFSET(0xC89C7E0)
#define CLASS_3_083B4301F30145C8_METHOD_3_6FCBD22EAD28F8E9_OFFSET UNITYSDK_OFFSET(0xC89DF50)
#define CLASS_3_083B4301F30145C8_METHOD_3_72A96A30E2BEB609_OFFSET UNITYSDK_OFFSET(0xC89D8F0)
#define CLASS_3_083B4301F30145C8_METHOD_3_7F005EF2A911D9E3_OFFSET UNITYSDK_OFFSET(0xC89D1E0)
#define CLASS_3_083B4301F30145C8_METHOD_3_81904ECFA304C59B_OFFSET UNITYSDK_OFFSET(0xC89C7F0)
#define CLASS_3_083B4301F30145C8_METHOD_3_819198B83792FDCF_OFFSET UNITYSDK_OFFSET(0xC89F260)
#define CLASS_3_083B4301F30145C8_METHOD_3_B0EF46530F2B00C4_OFFSET UNITYSDK_OFFSET(0xC89E9E0)
#define CLASS_3_083B4301F30145C8_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC89C390)
#define CLASS_3_083B4301F30145C8_METHOD_3_B36DBE2F13B1DA6D_OFFSET UNITYSDK_OFFSET(0xC89D810)
#define CLASS_3_083B4301F30145C8_METHOD_3_B4FEBE6444009BBC_OFFSET UNITYSDK_OFFSET(0xC89F1D0)
#define CLASS_3_083B4301F30145C8_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xC89EEF0)
#define CLASS_3_083B4301F30145C8_METHOD_3_C18C48FFD77EB03B_OFFSET UNITYSDK_OFFSET(0xC89CAD0)
#define CLASS_3_083B4301F30145C8_METHOD_3_C50473E3420B327F_OFFSET UNITYSDK_OFFSET(0xC89ED70)
#define CLASS_3_083B4301F30145C8_METHOD_3_C85589C1253AFFD1_OFFSET UNITYSDK_OFFSET(0xC89CA30)
#define CLASS_3_083B4301F30145C8_METHOD_3_C942D98B60641864_OFFSET UNITYSDK_OFFSET(0xC89C4C0)
#define CLASS_3_083B4301F30145C8_METHOD_3_CE65ECE6257B0F32_OFFSET UNITYSDK_OFFSET(0xC89F310)
#define CLASS_3_083B4301F30145C8_METHOD_3_D51B57322AA430CA_OFFSET UNITYSDK_OFFSET(0xC89C060)
#define CLASS_3_083B4301F30145C8_METHOD_3_D8CDBFBD11719181_OFFSET UNITYSDK_OFFSET(0xC89D460)
#define CLASS_3_083B4301F30145C8_METHOD_3_DE306E259BDEF761_OFFSET UNITYSDK_OFFSET(0xC89C8C0)
#define CLASS_3_083B4301F30145C8_METHOD_3_E6E3C845A1C6D63E_OFFSET UNITYSDK_OFFSET(0xC89E4F0)
#define CLASS_3_083B4301F30145C8_METHOD_3_E7558A1DFF7208C8_1_OFFSET UNITYSDK_OFFSET(0xC89D800)
#define CLASS_3_083B4301F30145C8_METHOD_3_E7558A1DFF7208C8_2_OFFSET UNITYSDK_OFFSET(0xC89E9C0)
#define CLASS_3_083B4301F30145C8_METHOD_3_E7558A1DFF7208C8_3_OFFSET UNITYSDK_OFFSET(0xC89E9D0)
#define CLASS_3_083B4301F30145C8_METHOD_3_E7558A1DFF7208C8_4_OFFSET UNITYSDK_OFFSET(0xC89F3B0)
#define CLASS_3_083B4301F30145C8_METHOD_3_E7558A1DFF7208C8_OFFSET UNITYSDK_OFFSET(0xC89D7F0)
#define CLASS_3_083B4301F30145C8_METHOD_3_FFCB1A532C94B961_OFFSET UNITYSDK_OFFSET(0xC89DAA0)
#define CLASS_3_083B4301F30145C8__CTOR_OFFSET UNITYSDK_OFFSET(0xC89C470)

inline static constexpr unsigned int Class_3_083B4301F30145C8_TypeDefinitionIndex = 38535;

class Class_3_083B4301F30145C8 : public ::Class_2_5560EE9F1F33A604
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x40
	::Nap::NapECS::EcsFilter* Field_3_3; // 0x48
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x50
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x58
	::Nap::NapECS::EcsFilter* Field_3_4; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_D51B57322AA430CA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_D51B57322AA430CA_OFFSET))(this, a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_C942D98B60641864(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::String* a4, ::System::Boolean a5, ::MoleMole::UIHollowChessPieceParticle_AttachPointType a6, ::System::Boolean a7, ::MoleMole::UIHollowChessPieceParticle_TransformType a8, ::System::Nullable_1<::Foundation::Unreal::FTransform> a9)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::String*, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_AttachPointType, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_C942D98B60641864_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_5C0F4CFE9C6CAB7B_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_81904ECFA304C59B(::Class_5_1C775D1A5A638660* a1)
	{
		return ((::System::Void(*)(::Class_5_1C775D1A5A638660*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_81904ECFA304C59B_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_DE306E259BDEF761(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_DE306E259BDEF761_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B_1(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_5C0F4CFE9C6CAB7B_1_OFFSET))(this, a1);
	}

	static ::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689 Method_3_C85589C1253AFFD1(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2)
	{
		return ((::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_C85589C1253AFFD1_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_377E6E8F710C5BB9(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::String* a3, ::System::Int32 a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_377E6E8F710C5BB9_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B_2(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_5C0F4CFE9C6CAB7B_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_39468678C9BF10F3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_39468678C9BF10F3_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_7F005EF2A911D9E3(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_7F005EF2A911D9E3_OFFSET))(a1, a2);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B_3(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_5C0F4CFE9C6CAB7B_3_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_D8CDBFBD11719181(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_D8CDBFBD11719181_OFFSET))(a1);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_E7558A1DFF7208C8_OFFSET))(this);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8_1()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_E7558A1DFF7208C8_1_OFFSET))(this);
	}

	static ::System::Void Method_3_B36DBE2F13B1DA6D(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_B36DBE2F13B1DA6D_OFFSET))(a1);
	}

	static ::System::Void Method_3_72A96A30E2BEB609(::Class_4_B99AA5AE371451AA* a1, ::Class_5_EC49DC305E06FE39* a2, ::Class_5_F638703ACD0FA08E* a3)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::Class_5_EC49DC305E06FE39*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_72A96A30E2BEB609_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_E6E3C845A1C6D63E(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7, ::System::String* a8, ::System::Boolean a9, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* a10, ::System::Nullable_1<::System::Int64> a11)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>*, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_E6E3C845A1C6D63E_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_3_028B904D81646E73(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_028B904D81646E73_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6FCBD22EAD28F8E9(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_6FCBD22EAD28F8E9_OFFSET))(a1, a2);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8_2()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_E7558A1DFF7208C8_2_OFFSET))(this);
	}

	static ::System::Void Method_3_FFCB1A532C94B961(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_FFCB1A532C94B961_OFFSET))(a1, a2);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8_3()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_E7558A1DFF7208C8_3_OFFSET))(this);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_B0EF46530F2B00C4(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2, ::Class_0_16E4307DCC419505_175* a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_B0EF46530F2B00C4_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_5C0F4CFE9C6CAB7B_4(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_5C0F4CFE9C6CAB7B_4_OFFSET))(this, a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_551D31BFE6A9A3B6(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_551D31BFE6A9A3B6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_B1936CE4DA97AA45_OFFSET))();
	}

	static ::System::Void Method_3_42340AD55179E540(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_42340AD55179E540_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_C50473E3420B327F(::MoleMole::HollowChessboard::HollowCell a1, ::System::Int32 a2, ::Class_1_86A85CB5038B7046_Struct_2_5396005F9A53A130& a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::Class_1_86A85CB5038B7046_Struct_2_5396005F9A53A130&))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_C50473E3420B327F_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_145D78F368B63EDE(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::String* a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_145D78F368B63EDE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_488B22A0B55DFD1B(::Class_4_B99AA5AE371451AA* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::Class_4_B99AA5AE371451AA*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_488B22A0B55DFD1B_OFFSET))(a1, a2);
	}

	static ::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689 Method_3_C18C48FFD77EB03B(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2)
	{
		return ((::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_C18C48FFD77EB03B_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_B4FEBE6444009BBC(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_B4FEBE6444009BBC_OFFSET))(a1, a2);
	}

	::System::Void Method_3_819198B83792FDCF(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_819198B83792FDCF_OFFSET))(this, a1);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_CE65ECE6257B0F32(::Class_4_B99AA5AE371451AA* a1, ::Struct_2_50968EFA8638B3BF& a2, ::Class_0_16E4307DCC419505_175* a3)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::Class_4_B99AA5AE371451AA*, ::Struct_2_50968EFA8638B3BF&, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_CE65ECE6257B0F32_OFFSET))(a1, a2, a3);
	}

	::Nap::NapECS::EcsFilter* Method_3_E7558A1DFF7208C8_4()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_E7558A1DFF7208C8_4_OFFSET))(this);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_083B4301F30145C8_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}
};
