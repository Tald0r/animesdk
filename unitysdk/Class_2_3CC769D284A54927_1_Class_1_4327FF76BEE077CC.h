#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_3CC769D284A54927_1;
class Class_3_025FF4981524A424_89;
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_1_CLASS_1_4327FF76BEE077CC_METHOD_1_2F11ED5AACC28BE5_OFFSET UNITYSDK_OFFSET(0xA94BA70)
#define CLASS_2_3CC769D284A54927_1_CLASS_1_4327FF76BEE077CC__CTOR_OFFSET UNITYSDK_OFFSET(0xA94BA60)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Class_1_4327FF76BEE077CC_TypeDefinitionIndex = 52812;

class Class_2_3CC769D284A54927_1_Class_1_4327FF76BEE077CC : public ::System::Object
{
public:
	::Class_2_3CC769D284A54927_1* Field_1_1; // 0x10
	::System::Threading::CancellationTokenSource* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_4327FF76BEE077CC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2F11ED5AACC28BE5(::System::ValueTuple_2<::System::Boolean, ::Class_3_025FF4981524A424_89*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Class_3_025FF4981524A424_89*>))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_4327FF76BEE077CC_METHOD_1_2F11ED5AACC28BE5_OFFSET))(this, a1);
	}
};
