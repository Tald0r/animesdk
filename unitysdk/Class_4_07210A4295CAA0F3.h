#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BC82EF9085BE2056.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_5_2B047B81D949C4E6;
class Class_5_AF65C3A968E836D2;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_07210A4295CAA0F3_METHOD_4_0B2B196E2CC91FF1_OFFSET UNITYSDK_OFFSET(0x5E265F0)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_1C5158B2DF91A2F7_OFFSET UNITYSDK_OFFSET(0x5E26500)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_2DB4122A33EFF900_OFFSET UNITYSDK_OFFSET(0x5E274F0)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_364958D4B7114707_OFFSET UNITYSDK_OFFSET(0x5E26A80)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_4D29B8C91C6A85DD_OFFSET UNITYSDK_OFFSET(0x5E27C10)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_6B03AA216735C783_OFFSET UNITYSDK_OFFSET(0x5E271C0)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_6C36CB2BC32CBC4E_OFFSET UNITYSDK_OFFSET(0x5E267E0)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_885FEC59B6F1237C_OFFSET UNITYSDK_OFFSET(0x5E27290)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_98E60AF233408FFD_OFFSET UNITYSDK_OFFSET(0x5E27730)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_CE3B1A1FB1A10064_OFFSET UNITYSDK_OFFSET(0x5E267F0)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_D279183863085EC4_OFFSET UNITYSDK_OFFSET(0x5E27840)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_D2F55509002A3112_OFFSET UNITYSDK_OFFSET(0x5E27980)
#define CLASS_4_07210A4295CAA0F3_METHOD_4_E7B3CCB3F209A36D_OFFSET UNITYSDK_OFFSET(0x5E26600)
#define CLASS_4_07210A4295CAA0F3__CTOR_OFFSET UNITYSDK_OFFSET(0x5E265A0)

inline static constexpr unsigned int Class_4_07210A4295CAA0F3_TypeDefinitionIndex = 53750;

class Class_4_07210A4295CAA0F3 : public ::Class_3_BC82EF9085BE2056
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>* Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_1C5158B2DF91A2F7()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_1C5158B2DF91A2F7_OFFSET))(this);
	}

	::System::Void Method_4_0B2B196E2CC91FF1(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>*))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_0B2B196E2CC91FF1_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_E7B3CCB3F209A36D(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2, ::System::Boolean a3)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_E7B3CCB3F209A36D_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>* Method_4_6C36CB2BC32CBC4E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_6C36CB2BC32CBC4E_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_CE3B1A1FB1A10064(::Class_1_0AEBFEBDADDA07AC* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowChessboardUID a3)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_1_0AEBFEBDADDA07AC*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_CE3B1A1FB1A10064_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>* Method_4_6B03AA216735C783()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_6B03AA216735C783_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_885FEC59B6F1237C(::MoleMole::HollowChessboard::HollowCell a1, ::System::Boolean a2)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_885FEC59B6F1237C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_2DB4122A33EFF900(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_2DB4122A33EFF900_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_98E60AF233408FFD(::Class_1_0AEBFEBDADDA07AC* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowChessboardUID a3)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_1_0AEBFEBDADDA07AC*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_98E60AF233408FFD_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_4_07210A4295CAA0F3* Method_4_D279183863085EC4()
	{
		return ((::Class_4_07210A4295CAA0F3*(*)())((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_D279183863085EC4_OFFSET))();
	}

	::System::Void Method_4_D2F55509002A3112(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_D2F55509002A3112_OFFSET))(this, a1);
	}

	::System::Void Method_4_364958D4B7114707(::MoleMole::HollowChessboard::HollowEntity* a1, ::System::Boolean a2, ::Class_1_0AEBFEBDADDA07AC* a3, ::MoleMole::HollowChessboard::HollowCell a4, ::MoleMole::HollowChessboard::HollowChessboardUID a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::System::Boolean, ::Class_1_0AEBFEBDADDA07AC*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_364958D4B7114707_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_4_4D29B8C91C6A85DD(::Class_5_2B047B81D949C4E6* a1, ::Class_5_AF65C3A968E836D2* a2, ::Class_5_AF65C3A968E836D2* a3, ::MoleMole::HollowChessboard::HollowCell a4, ::MoleMole::HollowChessboard::HollowCell a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_2B047B81D949C4E6*, ::Class_5_AF65C3A968E836D2*, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_07210A4295CAA0F3_METHOD_4_4D29B8C91C6A85DD_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
