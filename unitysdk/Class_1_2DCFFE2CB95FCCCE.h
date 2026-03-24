#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A047EA5169B6B30F;
class Class_2_208CC9941471731A_856;

#define CLASS_1_2DCFFE2CB95FCCCE_METHOD_1_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0xA591C80)
#define CLASS_1_2DCFFE2CB95FCCCE_METHOD_1_894257D44E2F39FA_OFFSET UNITYSDK_OFFSET(0xA591B60)
#define CLASS_1_2DCFFE2CB95FCCCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA591B50)

inline static constexpr unsigned int Class_1_2DCFFE2CB95FCCCE_TypeDefinitionIndex = 49905;

class Class_1_2DCFFE2CB95FCCCE : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_856* Field_1_2; // 0x10
	::Class_1_A047EA5169B6B30F* Field_1_3; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::Int32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DCFFE2CB95FCCCE__CTOR_OFFSET))(this);
	}

	::Class_1_A047EA5169B6B30F* Method_1_894257D44E2F39FA()
	{
		return ((::Class_1_A047EA5169B6B30F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DCFFE2CB95FCCCE_METHOD_1_894257D44E2F39FA_OFFSET))(this);
	}

	::System::Boolean Method_1_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DCFFE2CB95FCCCE_METHOD_1_2A887DFC7A5BB2CB_OFFSET))(this);
	}
};
