#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_519724C3FB37B199.h"
#include "unitysdk/Enum_3_612F88F8560660E1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A8379E4182124966_METHOD_1_1F67CDB88C032852_OFFSET UNITYSDK_OFFSET(0x6600270)
#define CLASS_1_A8379E4182124966_METHOD_1_3C615A1C69EA3FC8_OFFSET UNITYSDK_OFFSET(0x6600180)
#define CLASS_1_A8379E4182124966_METHOD_1_83C62D2130E2E0BC_OFFSET UNITYSDK_OFFSET(0x6600120)
#define CLASS_1_A8379E4182124966_METHOD_1_A37F95FE754B38A0_OFFSET UNITYSDK_OFFSET(0x66003C0)
#define CLASS_1_A8379E4182124966__CCTOR_OFFSET UNITYSDK_OFFSET(0x6600070)

inline static constexpr unsigned int Class_1_A8379E4182124966_TypeDefinitionIndex = 80557;

class Class_1_A8379E4182124966 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8379E4182124966_TypeDefinitionIndex)->GetStaticField(0x3A470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966__CCTOR_OFFSET))();
	}

	static ::Enum_3_519724C3FB37B199 Method_1_83C62D2130E2E0BC(::Enum_3_612F88F8560660E1 a1)
	{
		return ((::Enum_3_519724C3FB37B199(*)(::Enum_3_612F88F8560660E1))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_83C62D2130E2E0BC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3C615A1C69EA3FC8(::System::String* a1, ::Enum_3_519724C3FB37B199& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Enum_3_519724C3FB37B199&))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_3C615A1C69EA3FC8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F67CDB88C032852(::Enum_3_519724C3FB37B199 a1)
	{
		return ((::System::Void(*)(::Enum_3_519724C3FB37B199))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_1F67CDB88C032852_OFFSET))(a1);
	}

	static ::System::Void Method_1_A37F95FE754B38A0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_A37F95FE754B38A0_OFFSET))(a1);
	}
};
