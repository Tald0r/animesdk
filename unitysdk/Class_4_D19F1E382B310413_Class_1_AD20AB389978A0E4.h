#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9A0F9781FD520ADB.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_4_D19F1E382B310413;

#define CLASS_4_D19F1E382B310413_CLASS_1_AD20AB389978A0E4_METHOD_1_D8FAF54ECE2846E7_OFFSET UNITYSDK_OFFSET(0xAFC37B0)
#define CLASS_4_D19F1E382B310413_CLASS_1_AD20AB389978A0E4__CTOR_OFFSET UNITYSDK_OFFSET(0xAFC37A0)

inline static constexpr unsigned int Class_4_D19F1E382B310413_Class_1_AD20AB389978A0E4_TypeDefinitionIndex = 78776;

class Class_4_D19F1E382B310413_Class_1_AD20AB389978A0E4 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0x10
	::Struct_2_9A0F9781FD520ADB Field_1_1; // 0x40
	::Class_4_D19F1E382B310413* Field_1_4; // 0x68
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0x70
	::System::Int32 Field_1_0; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D19F1E382B310413_CLASS_1_AD20AB389978A0E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D8FAF54ECE2846E7(::System::ValueTuple_2<::System::Boolean, ::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_4_D19F1E382B310413_CLASS_1_AD20AB389978A0E4_METHOD_1_D8FAF54ECE2846E7_OFFSET))(this, a1);
	}
};
