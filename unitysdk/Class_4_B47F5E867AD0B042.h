#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BC82EF9085BE2056.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_5E94C8D55DBFF524.h"

class Class_1_9C9F648C2B4D18AF;
class Class_1_F89B971D2BF18070;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_B47F5E867AD0B042_METHOD_4_47AF5B0DED97BBB8_OFFSET UNITYSDK_OFFSET(0x9A8B4F0)
#define CLASS_4_B47F5E867AD0B042_METHOD_4_5E2F01B0702DACBE_OFFSET UNITYSDK_OFFSET(0x9A8BE00)
#define CLASS_4_B47F5E867AD0B042_METHOD_4_6B845815925845A2_OFFSET UNITYSDK_OFFSET(0x9A8B730)
#define CLASS_4_B47F5E867AD0B042_METHOD_4_704C379A8A3C8471_OFFSET UNITYSDK_OFFSET(0x9A8B5E0)
#define CLASS_4_B47F5E867AD0B042_METHOD_4_9E273918EE1BE07B_OFFSET UNITYSDK_OFFSET(0x9A8C350)
#define CLASS_4_B47F5E867AD0B042_METHOD_4_AE2719440694832D_OFFSET UNITYSDK_OFFSET(0x9A8BC20)
#define CLASS_4_B47F5E867AD0B042__CTOR_OFFSET UNITYSDK_OFFSET(0x9A8B590)

inline static constexpr unsigned int Class_4_B47F5E867AD0B042_TypeDefinitionIndex = 40067;

class Class_4_B47F5E867AD0B042 : public ::Class_3_BC82EF9085BE2056
{
public:
	::Struct_2_5E94C8D55DBFF524 Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_47AF5B0DED97BBB8()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_47AF5B0DED97BBB8_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_704C379A8A3C8471(::Class_1_9C9F648C2B4D18AF* a1, ::System::Boolean a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_1_9C9F648C2B4D18AF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_704C379A8A3C8471_OFFSET))(this, a1, a2);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_AE2719440694832D(::System::Int32 a1, ::Class_1_F89B971D2BF18070* a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::Int32, ::Class_1_F89B971D2BF18070*))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_AE2719440694832D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_5E2F01B0702DACBE(::MoleMole::HollowChessboard::HollowEntity* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_5E2F01B0702DACBE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_6B845815925845A2(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::System::Int32 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_6B845815925845A2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_4_9E273918EE1BE07B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_B47F5E867AD0B042_METHOD_4_9E273918EE1BE07B_OFFSET))(this, a1);
	}
};
