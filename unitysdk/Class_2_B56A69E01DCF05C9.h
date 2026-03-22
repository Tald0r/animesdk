#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C9590CC1EC3F8FB3.h"
#include "unitysdk/Struct_2_EB8B7F5FFB953B6C.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_2_B56A69E01DCF05C9_TypeDefinitionIndex = 73428;

template <typename T>
class Class_2_B56A69E01DCF05C9 : public ::Class_1_C9590CC1EC3F8FB3
{
public:
	static T* StaticGet_Field_2_0()
	{
		return (T*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B56A69E01DCF05C9_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::List_1<::Class_1_C9590CC1EC3F8FB3*>* Field_2_1; // 0x0
};
