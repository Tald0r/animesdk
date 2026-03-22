#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_416.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_996;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_2_4A363F25283613BB_METHOD_2_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x1A0CF780)
#define CLASS_2_4A363F25283613BB_METHOD_2_52E2BE632E6F7F74_OFFSET UNITYSDK_OFFSET(0x1A0CFB90)
#define CLASS_2_4A363F25283613BB_METHOD_2_54EEEF787CBB442B_OFFSET UNITYSDK_OFFSET(0x1A0CFF80)
#define CLASS_2_4A363F25283613BB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A0CF060)
#define CLASS_2_4A363F25283613BB_METHOD_2_CFC3030A2F1B39EC_OFFSET UNITYSDK_OFFSET(0x1A0CF990)
#define CLASS_2_4A363F25283613BB_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1A0CFD40)
#define CLASS_2_4A363F25283613BB_METHOD_2_DDA7E14998A3D8C3_OFFSET UNITYSDK_OFFSET(0x1A0CF2A0)
#define CLASS_2_4A363F25283613BB_METHOD_2_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x1A0CFCB0)
#define CLASS_2_4A363F25283613BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CF0A0)

inline static constexpr unsigned int Class_2_4A363F25283613BB_TypeDefinitionIndex = 79537;

class Class_2_4A363F25283613BB : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::System::Int32>*>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_4; // 0x20
	::Struct_2_1862835F8661A21F_416 Field_2_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* Field_2_3; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_996*>* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A363F25283613BB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A363F25283613BB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_DDA7E14998A3D8C3(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_4A363F25283613BB_METHOD_2_DDA7E14998A3D8C3_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_996* Method_2_CFC3030A2F1B39EC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Class_2_208CC9941471731A_996*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4A363F25283613BB_METHOD_2_CFC3030A2F1B39EC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::System::Int32>* Method_2_52E2BE632E6F7F74(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4A363F25283613BB_METHOD_2_52E2BE632E6F7F74_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4A363F25283613BB_METHOD_2_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A363F25283613BB_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_996* Method_2_54EEEF787CBB442B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_208CC9941471731A_996*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4A363F25283613BB_METHOD_2_54EEEF787CBB442B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A363F25283613BB_METHOD_2_3CCA0B8A31B650A8_OFFSET))(this);
	}
};
