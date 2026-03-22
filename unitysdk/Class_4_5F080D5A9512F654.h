#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_DD6534260D7F9B1A;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_4_5F080D5A9512F654_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x9506FD0)
#define CLASS_4_5F080D5A9512F654_METHOD_4_0BB33E3E72815269_OFFSET UNITYSDK_OFFSET(0x9507330)
#define CLASS_4_5F080D5A9512F654_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9507510)
#define CLASS_4_5F080D5A9512F654_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x95070B0)
#define CLASS_4_5F080D5A9512F654__CCTOR_OFFSET UNITYSDK_OFFSET(0x9507030)
#define CLASS_4_5F080D5A9512F654__CTOR_OFFSET UNITYSDK_OFFSET(0x95071F0)

inline static constexpr unsigned int Class_4_5F080D5A9512F654_TypeDefinitionIndex = 43947;

class Class_4_5F080D5A9512F654 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x10D; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>* Field_4_3; // 0x50
	::Class_1_DD6534260D7F9B1A* Field_4_2; // 0x58
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::UInt32>* Field_4_1; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_5F080D5A9512F654__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F080D5A9512F654__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F080D5A9512F654_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F080D5A9512F654_ONCLEAN_OFFSET))(this);
	}

	static ::Class_4_5F080D5A9512F654* Method_4_0BB33E3E72815269()
	{
		return ((::Class_4_5F080D5A9512F654*(*)())((::PBYTE)hIl2Cpp + CLASS_4_5F080D5A9512F654_METHOD_4_0BB33E3E72815269_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5F080D5A9512F654_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
