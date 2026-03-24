#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVSwitchReason.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"
#include "unitysdk/System/Object.h"

class Class_1_D1F36661149169E6;
class Class_1_F5B35B1B6669CF16;
class Class_4_AC6D98911872E0CE;
class Class_5_0B648F1F8F6AC84A;
class Class_5_AF65C3A968E836D2;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E448A6480D65B7F5_METHOD_1_05A64AA9F08176D9_OFFSET UNITYSDK_OFFSET(0x6307030)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_1189611A12FA5516_OFFSET UNITYSDK_OFFSET(0x6306800)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x63051D0)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_1716CAB4ADFCB600_OFFSET UNITYSDK_OFFSET(0x6306830)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_1D801978A62BBFA1_OFFSET UNITYSDK_OFFSET(0x6304C70)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_293FC48D529C9F14_OFFSET UNITYSDK_OFFSET(0x63073A0)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_2A447351969108D3_OFFSET UNITYSDK_OFFSET(0x6306C20)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_4C9A094E19321989_OFFSET UNITYSDK_OFFSET(0x6306900)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_72C10604F14508A1_OFFSET UNITYSDK_OFFSET(0x6306E90)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_826EBA7AA425AA3B_OFFSET UNITYSDK_OFFSET(0x6304C90)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x63070B0)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x6306B70)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_9CE625FDC09E040C_OFFSET UNITYSDK_OFFSET(0x6304D60)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_9EF9C4C2711D220E_OFFSET UNITYSDK_OFFSET(0x63072D0)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_B8B4682449A0DE62_OFFSET UNITYSDK_OFFSET(0x63050B0)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_E98A23CC3682A5D1_OFFSET UNITYSDK_OFFSET(0x6304C80)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x63072E0)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_F38FF0665A687BE0_OFFSET UNITYSDK_OFFSET(0x6307570)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_F96EB1FD9BE0B8EE_OFFSET UNITYSDK_OFFSET(0x63072F0)
#define CLASS_1_E448A6480D65B7F5_METHOD_1_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x6307210)
#define CLASS_1_E448A6480D65B7F5__CTOR_OFFSET UNITYSDK_OFFSET(0x6304AC0)

inline static constexpr unsigned int Class_1_E448A6480D65B7F5_TypeDefinitionIndex = 55860;

class Class_1_E448A6480D65B7F5 : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_10; // 0x10
	::System::Action* Field_1_4; // 0x18
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_11; // 0x20
	::MoleMole::UIHollowChessboard3DModelController* Field_1_17; // 0x28
	::System::Action* Field_1_14; // 0x30
	::Class_1_F5B35B1B6669CF16* Field_1_18; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* Field_1_8; // 0x40
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_9; // 0x48
	::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase* Field_1_5; // 0x50
	::Class_5_AF65C3A968E836D2* Field_1_16; // 0x58
	::System::Action* Field_1_3; // 0x60
	::Enum_3_ABCAEFDF06E3479A Field_1_0; // 0x68
	::System::Single Field_1_13; // 0x6C
	::MoleMole::HollowChessboard::HollowCell Field_1_1; // 0x70
	::MoleMole::HollowChessboard::HollowCell Field_1_2; // 0x7C
	::MoleMole::Config::ConfigHollowChessboard_BigTVSwitchReason Field_1_15; // 0x88
	::System::Boolean Field_1_7; // 0x8C
	::System::Boolean Field_1_6; // 0x8D
	::System::Single Field_1_12; // 0x90

	::System::Void _ctor(::Enum_3_ABCAEFDF06E3479A a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::Class_5_AF65C3A968E836D2* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ABCAEFDF06E3479A, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1D801978A62BBFA1(::MoleMole::Config::ConfigHollowChessboard_BigTVSwitchReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_BigTVSwitchReason))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_1D801978A62BBFA1_OFFSET))(this, a1);
	}

	::System::Action* Method_1_E98A23CC3682A5D1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_E98A23CC3682A5D1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_826EBA7AA425AA3B(::Class_5_0B648F1F8F6AC84A* a1, ::Enum_3_ABCAEFDF06E3479A a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_826EBA7AA425AA3B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B8B4682449A0DE62(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_B8B4682449A0DE62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1189611A12FA5516(::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_1189611A12FA5516_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_1716CAB4ADFCB600(::Class_5_0B648F1F8F6AC84A* a1, ::Enum_3_ABCAEFDF06E3479A a2, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext* a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*, ::Enum_3_ABCAEFDF06E3479A, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext*))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_1716CAB4ADFCB600_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_2A447351969108D3(::Class_5_0B648F1F8F6AC84A* a1, ::MoleMole::HollowPieceRepresentType a2, ::MoleMole::HollowPieceRepresentType a3, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*, ::MoleMole::HollowPieceRepresentType, ::MoleMole::HollowPieceRepresentType, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext*))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_2A447351969108D3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_89D1F247B9D324EE_1_OFFSET))(this);
	}

	::System::Void Method_1_9EF9C4C2711D220E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_9EF9C4C2711D220E_OFFSET))(this, a1);
	}

	::System::Void Method_1_72C10604F14508A1(::Class_5_0B648F1F8F6AC84A* a1, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase* a2, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext*))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_72C10604F14508A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_9CE625FDC09E040C(::Class_5_0B648F1F8F6AC84A* a1, ::Enum_3_ABCAEFDF06E3479A a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_9CE625FDC09E040C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F96EB1FD9BE0B8EE(::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_F96EB1FD9BE0B8EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C9A094E19321989(::Class_5_0B648F1F8F6AC84A* a1, ::Enum_3_ABCAEFDF06E3479A a2, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*, ::Enum_3_ABCAEFDF06E3479A, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext*))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_4C9A094E19321989_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_05A64AA9F08176D9(::Class_1_D1F36661149169E6* a1, ::Class_4_AC6D98911872E0CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1F36661149169E6*, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_05A64AA9F08176D9_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_293FC48D529C9F14(::Class_5_0B648F1F8F6AC84A* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_293FC48D529C9F14_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigHollowChessboard_BigTVSwitchReason Method_1_F38FF0665A687BE0()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard_BigTVSwitchReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_F38FF0665A687BE0_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E448A6480D65B7F5_METHOD_1_FE4FFF99CBDC5C59_OFFSET))(this);
	}
};
