#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_2_9A82E4A106BA6573;

#define CLASS_2_9A82E4A106BA6573_CLASS_1_DC04DCED4DFC5EE3_METHOD_1_99EEBF1EE2DC727D_OFFSET UNITYSDK_OFFSET(0x7F71D90)
#define CLASS_2_9A82E4A106BA6573_CLASS_1_DC04DCED4DFC5EE3_METHOD_1_F7F320D5652A453D_OFFSET UNITYSDK_OFFSET(0x7F71D60)
#define CLASS_2_9A82E4A106BA6573_CLASS_1_DC04DCED4DFC5EE3__CTOR_OFFSET UNITYSDK_OFFSET(0x7F71D50)

inline static constexpr unsigned int Class_2_9A82E4A106BA6573_Class_1_DC04DCED4DFC5EE3_TypeDefinitionIndex = 47955;

class Class_2_9A82E4A106BA6573_Class_1_DC04DCED4DFC5EE3 : public ::System::Object
{
public:
	::Class_2_9A82E4A106BA6573* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A82E4A106BA6573_CLASS_1_DC04DCED4DFC5EE3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F7F320D5652A453D(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9A82E4A106BA6573_CLASS_1_DC04DCED4DFC5EE3_METHOD_1_F7F320D5652A453D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99EEBF1EE2DC727D(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9A82E4A106BA6573_CLASS_1_DC04DCED4DFC5EE3_METHOD_1_99EEBF1EE2DC727D_OFFSET))(this, a1, a2, a3);
	}
};
