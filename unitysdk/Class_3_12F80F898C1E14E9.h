#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_11FD83788053949F_2.h"
#include "unitysdk/Struct_2_23357730042A2DE8_1.h"
#include "unitysdk/Struct_2_6042AC018BEA22C9_1.h"
#include "unitysdk/Struct_2_A840136A4E657746_1.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_12F80F898C1E14E9_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x96C6200)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x96C7610)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_43B003DC5FEEB0A7_OFFSET UNITYSDK_OFFSET(0x96C6E60)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_65C0C511268FE7CE_OFFSET UNITYSDK_OFFSET(0x96C6F20)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_7D9FB684EF17D12D_OFFSET UNITYSDK_OFFSET(0x96C7380)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_87209452B4E86410_OFFSET UNITYSDK_OFFSET(0x96C7560)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x96C6CB0)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x96C7320)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_A24A1AC307A571BF_OFFSET UNITYSDK_OFFSET(0x96C6BE0)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x96C6920)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x96C74C0)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_F3FCB050DFFC4CF0_OFFSET UNITYSDK_OFFSET(0x96C6490)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_F7248D85C9369AD5_OFFSET UNITYSDK_OFFSET(0x96C6B60)
#define CLASS_3_12F80F898C1E14E9_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x96C5CD0)
#define CLASS_3_12F80F898C1E14E9__CCTOR_OFFSET UNITYSDK_OFFSET(0x96C6260)
#define CLASS_3_12F80F898C1E14E9__CTOR_OFFSET UNITYSDK_OFFSET(0x96C62E0)

inline static constexpr unsigned int Class_3_12F80F898C1E14E9_TypeDefinitionIndex = 55980;

class Class_3_12F80F898C1E14E9 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Single Field_3_7; // 0x0
	// static const ::System::Int32 Field_3_10 = 0x73; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_23357730042A2DE8_1>* Field_3_8; // 0x48
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_6; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_4; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_5; // 0x60
	::Struct_2_11FD83788053949F_2 Field_3_0; // 0x68
	::Struct_2_6042AC018BEA22C9_1 Field_3_1; // 0x74
	::Struct_2_A840136A4E657746_1 Field_3_3; // 0x80
	::System::Single Field_3_9; // 0x8C
	::System::Boolean Field_3_2; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_F3FCB050DFFC4CF0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_F3FCB050DFFC4CF0_OFFSET))(this, a1);
	}

	::System::Void Method_3_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Single Method_3_F7248D85C9369AD5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_F7248D85C9369AD5_OFFSET))(this);
	}

	::System::Boolean Method_3_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::Class_3_12F80F898C1E14E9* Method_3_65C0C511268FE7CE()
	{
		return ((::Class_3_12F80F898C1E14E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_65C0C511268FE7CE_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_7D9FB684EF17D12D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_7D9FB684EF17D12D_OFFSET))(this);
	}

	::System::Single Method_3_A24A1AC307A571BF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_A24A1AC307A571BF_OFFSET))(this);
	}

	static ::Class_3_12F80F898C1E14E9* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_12F80F898C1E14E9*(*)())((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_87209452B4E86410()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_87209452B4E86410_OFFSET))(this);
	}

	::System::Single Method_3_43B003DC5FEEB0A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_43B003DC5FEEB0A7_OFFSET))(this);
	}

	::System::Int32 Method_3_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_37D0382D0C30A2DC_OFFSET))(this);
	}
};
