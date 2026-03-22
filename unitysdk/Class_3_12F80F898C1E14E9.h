#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_11FD83788053949F.h"
#include "unitysdk/Struct_2_11FD83788053949F_1.h"
#include "unitysdk/Struct_2_23357730042A2DE8.h"
#include "unitysdk/Struct_2_A840136A4E657746_1.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_12F80F898C1E14E9_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x8DD3690)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x8DD4A50)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_43B003DC5FEEB0A7_OFFSET UNITYSDK_OFFSET(0x8DD42D0)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_65C0C511268FE7CE_OFFSET UNITYSDK_OFFSET(0x8DD3CA0)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_7D9FB684EF17D12D_OFFSET UNITYSDK_OFFSET(0x8DD4180)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x8DD4840)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8DD49F0)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_A24A1AC307A571BF_OFFSET UNITYSDK_OFFSET(0x8DD40B0)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x8DD39E0)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_BCDB47CE840CA6EB_OFFSET UNITYSDK_OFFSET(0x8DD3920)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_BDBD945D6462D86F_OFFSET UNITYSDK_OFFSET(0x8DD4390)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x8DD4B10)
#define CLASS_3_12F80F898C1E14E9_METHOD_3_F7248D85C9369AD5_OFFSET UNITYSDK_OFFSET(0x8DD3C20)
#define CLASS_3_12F80F898C1E14E9_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x8DD3160)
#define CLASS_3_12F80F898C1E14E9__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DD36F0)
#define CLASS_3_12F80F898C1E14E9__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD3770)

inline static constexpr unsigned int Class_3_12F80F898C1E14E9_TypeDefinitionIndex = 60922;

class Class_3_12F80F898C1E14E9 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Single Field_3_7; // 0x0
	// static const ::System::Int32 Field_3_10 = 0x73; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_23357730042A2DE8>* Field_3_8; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_4; // 0x50
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_6; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_5; // 0x60
	::Struct_2_11FD83788053949F Field_3_0; // 0x68
	::System::Boolean Field_3_2; // 0x74
	::Struct_2_11FD83788053949F_1 Field_3_3; // 0x78
	::Struct_2_A840136A4E657746_1 Field_3_1; // 0x84
	::System::Single Field_3_9; // 0x90

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

	::System::Int32 Method_3_BCDB47CE840CA6EB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_BCDB47CE840CA6EB_OFFSET))(this);
	}

	::System::Void Method_3_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::Class_3_12F80F898C1E14E9* Method_3_65C0C511268FE7CE()
	{
		return ((::Class_3_12F80F898C1E14E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_65C0C511268FE7CE_OFFSET))(this);
	}

	::System::Single Method_3_A24A1AC307A571BF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_A24A1AC307A571BF_OFFSET))(this);
	}

	::System::Boolean Method_3_7D9FB684EF17D12D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_7D9FB684EF17D12D_OFFSET))(this);
	}

	::System::Single Method_3_43B003DC5FEEB0A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_43B003DC5FEEB0A7_OFFSET))(this);
	}

	::System::Single Method_3_F7248D85C9369AD5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_F7248D85C9369AD5_OFFSET))(this);
	}

	::System::Void Method_3_BDBD945D6462D86F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_BDBD945D6462D86F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_3_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_37D0382D0C30A2DC_OFFSET))(this);
	}

	static ::Class_3_12F80F898C1E14E9* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_12F80F898C1E14E9*(*)())((::PBYTE)hIl2Cpp + CLASS_3_12F80F898C1E14E9_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
