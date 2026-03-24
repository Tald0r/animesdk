#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41536F26CBEE8D4C.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_56FC0A9EBED64C0D_METHOD_1_0B909BB7CD4506B9_OFFSET UNITYSDK_OFFSET(0xDA21140)
#define CLASS_1_56FC0A9EBED64C0D_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xDA214A0)

inline static constexpr unsigned int Class_1_56FC0A9EBED64C0D_TypeDefinitionIndex = 48677;

class Class_1_56FC0A9EBED64C0D : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56FC0A9EBED64C0D_TypeDefinitionIndex)->GetStaticField(0x3C450);
	}

	static ::System::Boolean Method_1_0B909BB7CD4506B9(::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::Enum_3_41536F26CBEE8D4C>*))((::PBYTE)hIl2Cpp + CLASS_1_56FC0A9EBED64C0D_METHOD_1_0B909BB7CD4506B9_OFFSET))(a1);
	}

	static ::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_56FC0A9EBED64C0D_METHOD_1_35EA095E1AFDD9C8_OFFSET))();
	}
};
