#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define CLASS_1_DB18331A9E646CCB_METHOD_1_2A5EE92BB3D559F1_OFFSET UNITYSDK_OFFSET(0x1AD60020)
#define CLASS_1_DB18331A9E646CCB_METHOD_1_3EACADDBF6238417_OFFSET UNITYSDK_OFFSET(0x1AD601E0)
#define CLASS_1_DB18331A9E646CCB_METHOD_1_8C0A8CCC68A737F4_OFFSET UNITYSDK_OFFSET(0x1AD60120)
#define CLASS_1_DB18331A9E646CCB_METHOD_1_A9DFC8BA71ABC3AF_OFFSET UNITYSDK_OFFSET(0x1AD60280)
#define CLASS_1_DB18331A9E646CCB_METHOD_1_BDC92B6E9CB56E4E_OFFSET UNITYSDK_OFFSET(0x1AD5FEF0)
#define CLASS_1_DB18331A9E646CCB_METHOD_1_EF5216F17A6D0045_OFFSET UNITYSDK_OFFSET(0x1AD602E0)

inline static constexpr unsigned int Class_1_DB18331A9E646CCB_TypeDefinitionIndex = 8114;

class Class_1_DB18331A9E646CCB : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Int32 Method_1_BDC92B6E9CB56E4E(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB18331A9E646CCB_METHOD_1_BDC92B6E9CB56E4E_OFFSET))(a1);
	}

	static ::System::String* Method_1_2A5EE92BB3D559F1(::System::Int32 a1, ::System::Byte a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_DB18331A9E646CCB_METHOD_1_2A5EE92BB3D559F1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_3EACADDBF6238417(::System::IO::Stream* a1)
	{
		return ((::System::Int32(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_DB18331A9E646CCB_METHOD_1_3EACADDBF6238417_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_A9DFC8BA71ABC3AF(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DB18331A9E646CCB_METHOD_1_A9DFC8BA71ABC3AF_OFFSET))(a1);
	}

	static ::System::String* Method_1_8C0A8CCC68A737F4(::System::UInt32 a1, ::System::Byte a2)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_DB18331A9E646CCB_METHOD_1_8C0A8CCC68A737F4_OFFSET))(a1, a2);
	}

	static ::System::UInt64 Method_1_EF5216F17A6D0045(::System::String* a1)
	{
		return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB18331A9E646CCB_METHOD_1_EF5216F17A6D0045_OFFSET))(a1);
	}
};
