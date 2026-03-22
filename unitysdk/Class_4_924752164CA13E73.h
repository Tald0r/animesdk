#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"

class Class_1_6F763FE7425E8072;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_924752164CA13E73_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x765EF60)
#define CLASS_4_924752164CA13E73_METHOD_4_514C44711E393019_OFFSET UNITYSDK_OFFSET(0x765F160)
#define CLASS_4_924752164CA13E73_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x765F280)
#define CLASS_4_924752164CA13E73_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x765F040)
#define CLASS_4_924752164CA13E73__CCTOR_OFFSET UNITYSDK_OFFSET(0x765EFC0)
#define CLASS_4_924752164CA13E73__CTOR_OFFSET UNITYSDK_OFFSET(0x765F0D0)

inline static constexpr unsigned int Class_4_924752164CA13E73_TypeDefinitionIndex = 52466;

class Class_4_924752164CA13E73 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x10E; // 0x0
	::System::Collections::Generic::List_1<::Class_1_6F763FE7425E8072*>* Field_4_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_924752164CA13E73__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_924752164CA13E73__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_924752164CA13E73_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_924752164CA13E73_ONCLEAN_OFFSET))(this);
	}

	static ::Class_4_924752164CA13E73* Method_4_514C44711E393019()
	{
		return ((::Class_4_924752164CA13E73*(*)())((::PBYTE)hIl2Cpp + CLASS_4_924752164CA13E73_METHOD_4_514C44711E393019_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_924752164CA13E73_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
