#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5560EE9F1F33A604.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/Struct_2_50968EFA8638B3BF.h"

class Class_0_16E4307DCC419505_204;
class Class_4_5B32B6042C9283CB;
class Class_4_7B5A65E248106C68;
class Class_5_AF65C3A968E836D2;
class Class_5_F638703ACD0FA08E;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F63F0E637C345414_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x9C62720)
#define CLASS_3_F63F0E637C345414_METHOD_3_048E489E8C8547F5_OFFSET UNITYSDK_OFFSET(0x9C65610)
#define CLASS_3_F63F0E637C345414_METHOD_3_122A03281B6BD985_OFFSET UNITYSDK_OFFSET(0x9C63510)
#define CLASS_3_F63F0E637C345414_METHOD_3_19269CDA781BBC64_OFFSET UNITYSDK_OFFSET(0x9C66040)
#define CLASS_3_F63F0E637C345414_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x9C65460)
#define CLASS_3_F63F0E637C345414_METHOD_3_3FD08312234FBDE9_OFFSET UNITYSDK_OFFSET(0x9C64730)
#define CLASS_3_F63F0E637C345414_METHOD_3_4057D796AB024FE2_OFFSET UNITYSDK_OFFSET(0x9C63170)
#define CLASS_3_F63F0E637C345414_METHOD_3_64251E4104833438_OFFSET UNITYSDK_OFFSET(0x9C63480)
#define CLASS_3_F63F0E637C345414_METHOD_3_6CE927D4066CD159_OFFSET UNITYSDK_OFFSET(0x9C63910)
#define CLASS_3_F63F0E637C345414_METHOD_3_9794AF8A2551DBF5_OFFSET UNITYSDK_OFFSET(0x9C64680)
#define CLASS_3_F63F0E637C345414_METHOD_3_9F5FF55B2290E4A4_OFFSET UNITYSDK_OFFSET(0x9C658D0)
#define CLASS_3_F63F0E637C345414_METHOD_3_A56ABE02CA889CCB_OFFSET UNITYSDK_OFFSET(0x9C62BA0)
#define CLASS_3_F63F0E637C345414_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x9C655A0)
#define CLASS_3_F63F0E637C345414_METHOD_3_D7A50C7AAC83C423_OFFSET UNITYSDK_OFFSET(0x9C63AC0)
#define CLASS_3_F63F0E637C345414_METHOD_3_DE6505D1F6BB287E_OFFSET UNITYSDK_OFFSET(0x9C630A0)
#define CLASS_3_F63F0E637C345414_METHOD_3_E4BF5E0E1E925BB8_OFFSET UNITYSDK_OFFSET(0x9C654D0)
#define CLASS_3_F63F0E637C345414_METHOD_3_E6E5C672E61A86AD_OFFSET UNITYSDK_OFFSET(0x9C636A0)
#define CLASS_3_F63F0E637C345414_METHOD_3_E7ADAB321B8D521A_OFFSET UNITYSDK_OFFSET(0x9C65EB0)
#define CLASS_3_F63F0E637C345414__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C63060)
#define CLASS_3_F63F0E637C345414__CTOR_OFFSET UNITYSDK_OFFSET(0x9C63010)

inline static constexpr unsigned int Class_3_F63F0E637C345414_TypeDefinitionIndex = 69781;

class Class_3_F63F0E637C345414 : public ::Class_2_5560EE9F1F33A604
{
public:
	static ::System::Int32* StaticGet_Field_3_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_F63F0E637C345414_TypeDefinitionIndex)->GetStaticField(0xD5C0);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x40
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_A56ABE02CA889CCB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_A56ABE02CA889CCB_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_DE6505D1F6BB287E(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_DE6505D1F6BB287E_OFFSET))(a1);
	}

	::System::Void Method_3_4057D796AB024FE2(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_4057D796AB024FE2_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_64251E4104833438(::Class_4_5B32B6042C9283CB* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_64251E4104833438_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_122A03281B6BD985(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_122A03281B6BD985_OFFSET))(a1);
	}

	static ::System::Void Method_3_6CE927D4066CD159(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_6CE927D4066CD159_OFFSET))(a1);
	}

	static ::MoleMole::HollowChessboard::HollowCell Method_3_D7A50C7AAC83C423(::Class_4_7B5A65E248106C68* a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::Class_4_7B5A65E248106C68*, ::Class_5_AF65C3A968E836D2*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_D7A50C7AAC83C423_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_3_9794AF8A2551DBF5(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Int32(*)(::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_9794AF8A2551DBF5_OFFSET))(a1, a2);
	}

	static ::MoleMole::HollowChessboard::RenderDataHandle Method_3_3FD08312234FBDE9(::MoleMole::HollowChessboard::HollowEntity*& a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::Struct_2_50968EFA8638B3BF a3, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>* a4)
	{
		return ((::MoleMole::HollowChessboard::RenderDataHandle(*)(::MoleMole::HollowChessboard::HollowEntity*&, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Struct_2_50968EFA8638B3BF, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_3FD08312234FBDE9_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E6E5C672E61A86AD(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_E6E5C672E61A86AD_OFFSET))(a1);
	}

	static ::System::Void Method_3_E4BF5E0E1E925BB8(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_E4BF5E0E1E925BB8_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_048E489E8C8547F5(::Class_4_5B32B6042C9283CB* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_048E489E8C8547F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9F5FF55B2290E4A4(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_9F5FF55B2290E4A4_OFFSET))(a1);
	}

	::System::Void Method_3_E7ADAB321B8D521A(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_E7ADAB321B8D521A_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_19269CDA781BBC64(::Class_4_5B32B6042C9283CB* a1, ::Class_5_F638703ACD0FA08E* a2)
	{
		return ((::System::Void(*)(::Class_4_5B32B6042C9283CB*, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_3_F63F0E637C345414_METHOD_3_19269CDA781BBC64_OFFSET))(a1, a2);
	}
};
