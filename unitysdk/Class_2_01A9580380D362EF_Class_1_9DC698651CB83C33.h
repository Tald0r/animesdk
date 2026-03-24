#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_4666E61F66433B1E_1;
class Class_3_472679C84451629A_7;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_01A9580380D362EF_CLASS_1_9DC698651CB83C33_METHOD_1_407825C80963655C_OFFSET UNITYSDK_OFFSET(0x80F7240)
#define CLASS_2_01A9580380D362EF_CLASS_1_9DC698651CB83C33__CTOR_OFFSET UNITYSDK_OFFSET(0x80F7230)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_9DC698651CB83C33_TypeDefinitionIndex = 39737;

class Class_2_01A9580380D362EF_Class_1_9DC698651CB83C33 : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::IList_1<::Class_3_4666E61F66433B1E_1*>*>* Field_1_2; // 0x10
	::Class_2_01A9580380D362EF* Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_9DC698651CB83C33__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_407825C80963655C(::Class_3_472679C84451629A_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_7*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_9DC698651CB83C33_METHOD_1_407825C80963655C_OFFSET))(this, a1);
	}
};
