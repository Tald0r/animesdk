#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A47DA0824E8EFEEA_METHOD_1_1E0CDD9B08236CAC_OFFSET UNITYSDK_OFFSET(0x96654D0)

inline static constexpr unsigned int Class_1_A47DA0824E8EFEEA_TypeDefinitionIndex = 54484;

class Class_1_A47DA0824E8EFEEA : public ::System::Object
{
public:
	static ::System::Boolean Method_1_1E0CDD9B08236CAC(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A47DA0824E8EFEEA_METHOD_1_1E0CDD9B08236CAC_OFFSET))(a1, a2);
	}
};
