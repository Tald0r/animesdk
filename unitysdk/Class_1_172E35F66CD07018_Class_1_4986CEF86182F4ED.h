#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_172E35F66CD07018_CLASS_1_4986CEF86182F4ED_METHOD_1_0EE1F7F192FB3754_OFFSET UNITYSDK_OFFSET(0x777B820)
#define CLASS_1_172E35F66CD07018_CLASS_1_4986CEF86182F4ED__CTOR_OFFSET UNITYSDK_OFFSET(0x777B810)

inline static constexpr unsigned int Class_1_172E35F66CD07018_Class_1_4986CEF86182F4ED_TypeDefinitionIndex = 79534;

class Class_1_172E35F66CD07018_Class_1_4986CEF86182F4ED : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_172E35F66CD07018_CLASS_1_4986CEF86182F4ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0EE1F7F192FB3754()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_172E35F66CD07018_CLASS_1_4986CEF86182F4ED_METHOD_1_0EE1F7F192FB3754_OFFSET))(this);
	}
};
