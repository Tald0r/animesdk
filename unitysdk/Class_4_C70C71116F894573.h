#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/Class_4_C70C71116F894573_Enum_3_B4B78138CF90752C.h"
#include "unitysdk/Class_4_C70C71116F894573_Struct_2_091E41F7E0E918A2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_C70C71116F894573_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x88EF6C0)
#define CLASS_4_C70C71116F894573_METHOD_4_7810D6DCCECD04DA_OFFSET UNITYSDK_OFFSET(0x88EF960)
#define CLASS_4_C70C71116F894573_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x88EF900)
#define CLASS_4_C70C71116F894573_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x88EF7A0)
#define CLASS_4_C70C71116F894573__CCTOR_OFFSET UNITYSDK_OFFSET(0x88EF720)
#define CLASS_4_C70C71116F894573__CTOR_OFFSET UNITYSDK_OFFSET(0x88EF870)

inline static constexpr unsigned int Class_4_C70C71116F894573_TypeDefinitionIndex = 65370;

class Class_4_C70C71116F894573 : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x121; // 0x0
	::System::Collections::Generic::List_1<::Class_4_C70C71116F894573_Struct_2_091E41F7E0E918A2>* Field_4_3; // 0x50
	::System::Collections::Generic::List_1<::Class_4_C70C71116F894573_Struct_2_091E41F7E0E918A2>* Field_4_4; // 0x58
	::Class_4_C70C71116F894573_Enum_3_B4B78138CF90752C Field_4_1; // 0x60
	::System::Boolean Field_4_2; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_C70C71116F894573__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C70C71116F894573__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C70C71116F894573_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C70C71116F894573_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C70C71116F894573_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_C70C71116F894573* Method_4_7810D6DCCECD04DA()
	{
		return ((::Class_4_C70C71116F894573*(*)())((::PBYTE)hIl2Cpp + CLASS_4_C70C71116F894573_METHOD_4_7810D6DCCECD04DA_OFFSET))();
	}
};
