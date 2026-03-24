#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CA3D60180D9B3C6A_METHOD_1_800F7FDEB2F03033_OFFSET UNITYSDK_OFFSET(0xD5E01E0)
#define CLASS_1_CA3D60180D9B3C6A_METHOD_1_A26855E4C896E681_OFFSET UNITYSDK_OFFSET(0xD5DFEC0)
#define CLASS_1_CA3D60180D9B3C6A_METHOD_1_DF83BFE99606639B_OFFSET UNITYSDK_OFFSET(0xD5DFFA0)
#define CLASS_1_CA3D60180D9B3C6A__CTOR_OFFSET UNITYSDK_OFFSET(0xD5DFDE0)

inline static constexpr unsigned int Class_1_CA3D60180D9B3C6A_TypeDefinitionIndex = 67027;

class Class_1_CA3D60180D9B3C6A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA3D60180D9B3C6A__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_A26855E4C896E681(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA3D60180D9B3C6A_METHOD_1_A26855E4C896E681_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF83BFE99606639B(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA3D60180D9B3C6A_METHOD_1_DF83BFE99606639B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_800F7FDEB2F03033(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA3D60180D9B3C6A_METHOD_1_800F7FDEB2F03033_OFFSET))(this, a1);
	}
};
