#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8B664C71B784890D;
class Class_2_208CC9941471731A_130;

#define CLASS_1_2DCFFE2CB95FCCCE_METHOD_1_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0x828A300)
#define CLASS_1_2DCFFE2CB95FCCCE_METHOD_1_8034D3388E7A38EE_OFFSET UNITYSDK_OFFSET(0x828A1D0)
#define CLASS_1_2DCFFE2CB95FCCCE__CTOR_OFFSET UNITYSDK_OFFSET(0x828A1C0)

inline static constexpr unsigned int Class_1_2DCFFE2CB95FCCCE_TypeDefinitionIndex = 60062;

class Class_1_2DCFFE2CB95FCCCE : public ::System::Object
{
public:
	::Class_1_8B664C71B784890D* Field_1_3; // 0x10
	::Class_2_208CC9941471731A_130* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::Int32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DCFFE2CB95FCCCE__CTOR_OFFSET))(this);
	}

	::Class_1_8B664C71B784890D* Method_1_8034D3388E7A38EE()
	{
		return ((::Class_1_8B664C71B784890D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DCFFE2CB95FCCCE_METHOD_1_8034D3388E7A38EE_OFFSET))(this);
	}

	::System::Boolean Method_1_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DCFFE2CB95FCCCE_METHOD_1_2A887DFC7A5BB2CB_OFFSET))(this);
	}
};
