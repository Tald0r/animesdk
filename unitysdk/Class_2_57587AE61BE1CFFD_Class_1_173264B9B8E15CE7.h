#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_BC9D27E6028F322B;
class Class_2_57587AE61BE1CFFD;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_57587AE61BE1CFFD_CLASS_1_173264B9B8E15CE7_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xAF468A0)
#define CLASS_2_57587AE61BE1CFFD_CLASS_1_173264B9B8E15CE7__CTOR_OFFSET UNITYSDK_OFFSET(0xAF46890)

inline static constexpr unsigned int Class_2_57587AE61BE1CFFD_Class_1_173264B9B8E15CE7_TypeDefinitionIndex = 53513;

class Class_2_57587AE61BE1CFFD_Class_1_173264B9B8E15CE7 : public ::System::Object
{
public:
	::Class_2_57587AE61BE1CFFD* Field_1_0; // 0x10
	::System::Action_1<::Class_1_BC9D27E6028F322B*>* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::PipelineCamera::FinalCameraData Field_1_3; // 0x24
	::Enum_3_F00DC819D834EFD2 Field_1_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_173264B9B8E15CE7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57587AE61BE1CFFD_CLASS_1_173264B9B8E15CE7_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
