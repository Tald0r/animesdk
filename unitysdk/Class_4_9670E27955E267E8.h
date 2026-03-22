#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DF9D0F5061CCF34_Struct_2_2821977B557C6070.h"
#include "unitysdk/Class_3_BC82EF9085BE2056.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_5E94C8D55DBFF524_1.h"

class Class_1_F89B971D2BF18070;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_9670E27955E267E8_METHOD_4_1C5158B2DF91A2F7_OFFSET UNITYSDK_OFFSET(0x65FC330)
#define CLASS_4_9670E27955E267E8_METHOD_4_343D337EA1C47C4A_OFFSET UNITYSDK_OFFSET(0x65FD2E0)
#define CLASS_4_9670E27955E267E8_METHOD_4_4576767BB051F82D_OFFSET UNITYSDK_OFFSET(0x65FD8B0)
#define CLASS_4_9670E27955E267E8_METHOD_4_60CC89A583000F3D_OFFSET UNITYSDK_OFFSET(0x65FCEE0)
#define CLASS_4_9670E27955E267E8_METHOD_4_6B03AA216735C783_OFFSET UNITYSDK_OFFSET(0x65FCE10)
#define CLASS_4_9670E27955E267E8_METHOD_4_8541E62B84E14B26_OFFSET UNITYSDK_OFFSET(0x65FCFF0)
#define CLASS_4_9670E27955E267E8_METHOD_4_C6719C596214C323_OFFSET UNITYSDK_OFFSET(0x65FC3D0)
#define CLASS_4_9670E27955E267E8_METHOD_4_CC9C74A594D43E8D_OFFSET UNITYSDK_OFFSET(0x65FD6B0)
#define CLASS_4_9670E27955E267E8_METHOD_4_D6D811AB473606F4_OFFSET UNITYSDK_OFFSET(0x65FD190)
#define CLASS_4_9670E27955E267E8__CTOR_OFFSET UNITYSDK_OFFSET(0x65FD200)

inline static constexpr unsigned int Class_4_9670E27955E267E8_TypeDefinitionIndex = 51213;

class Class_4_9670E27955E267E8 : public ::Class_3_BC82EF9085BE2056
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*>* Field_4_0; // 0x10
	::Struct_2_5E94C8D55DBFF524_1 Field_4_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9670E27955E267E8__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_1C5158B2DF91A2F7()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9670E27955E267E8_METHOD_4_1C5158B2DF91A2F7_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_C6719C596214C323(::Class_1_F89B971D2BF18070* a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_1_F89B971D2BF18070*))((::PBYTE)hIl2Cpp + CLASS_4_9670E27955E267E8_METHOD_4_C6719C596214C323_OFFSET))(this, a1);
	}

	::System::Void Method_4_D6D811AB473606F4(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_4_9670E27955E267E8_METHOD_4_D6D811AB473606F4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>* Method_4_6B03AA216735C783()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9670E27955E267E8_METHOD_4_6B03AA216735C783_OFFSET))(this);
	}

	::System::Boolean Method_4_60CC89A583000F3D(::Class_1_F89B971D2BF18070* a1, ::Class_1_5DF9D0F5061CCF34_Struct_2_2821977B557C6070& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F89B971D2BF18070*, ::Class_1_5DF9D0F5061CCF34_Struct_2_2821977B557C6070&))((::PBYTE)hIl2Cpp + CLASS_4_9670E27955E267E8_METHOD_4_60CC89A583000F3D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_343D337EA1C47C4A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_9670E27955E267E8_METHOD_4_343D337EA1C47C4A_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_CC9C74A594D43E8D(::System::UInt32 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_9670E27955E267E8_METHOD_4_CC9C74A594D43E8D_OFFSET))(this, a1);
	}

	::System::Void Method_4_8541E62B84E14B26(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_4_9670E27955E267E8_METHOD_4_8541E62B84E14B26_OFFSET))(this, a1);
	}

	::System::Void Method_4_4576767BB051F82D(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_9670E27955E267E8_METHOD_4_4576767BB051F82D_OFFSET))(this, a1);
	}
};
