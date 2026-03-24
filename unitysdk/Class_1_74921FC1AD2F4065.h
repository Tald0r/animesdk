#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_74921FC1AD2F4065_METHOD_1_2B55D1AD10F92001_OFFSET UNITYSDK_OFFSET(0x8A45A40)
#define CLASS_1_74921FC1AD2F4065_METHOD_1_5317BDC14DE7C954_1_OFFSET UNITYSDK_OFFSET(0x8A45D50)
#define CLASS_1_74921FC1AD2F4065_METHOD_1_5317BDC14DE7C954_2_OFFSET UNITYSDK_OFFSET(0x8A45EB0)
#define CLASS_1_74921FC1AD2F4065_METHOD_1_5317BDC14DE7C954_OFFSET UNITYSDK_OFFSET(0x8A45BF0)
#define CLASS_1_74921FC1AD2F4065_METHOD_1_A718E71CD1048EE7_OFFSET UNITYSDK_OFFSET(0x8A46270)
#define CLASS_1_74921FC1AD2F4065_METHOD_1_F7DBB8FE99D18F82_OFFSET UNITYSDK_OFFSET(0x8A46010)
#define CLASS_1_74921FC1AD2F4065__CTOR_OFFSET UNITYSDK_OFFSET(0x8A45A30)

inline static constexpr unsigned int Class_1_74921FC1AD2F4065_TypeDefinitionIndex = 70232;

class Class_1_74921FC1AD2F4065 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_74921FC1AD2F4065__CTOR_OFFSET))(this);
	}

	static ::Foundation::AssetPath Method_1_2B55D1AD10F92001(::System::Int32 a1)
	{
		return ((::Foundation::AssetPath(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_74921FC1AD2F4065_METHOD_1_2B55D1AD10F92001_OFFSET))(a1);
	}

	static ::System::String* Method_1_5317BDC14DE7C954(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_74921FC1AD2F4065_METHOD_1_5317BDC14DE7C954_OFFSET))(a1);
	}

	static ::System::String* Method_1_5317BDC14DE7C954_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_74921FC1AD2F4065_METHOD_1_5317BDC14DE7C954_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_5317BDC14DE7C954_2(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_74921FC1AD2F4065_METHOD_1_5317BDC14DE7C954_2_OFFSET))(a1);
	}

	static ::System::String* Method_1_F7DBB8FE99D18F82(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_74921FC1AD2F4065_METHOD_1_F7DBB8FE99D18F82_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_A718E71CD1048EE7(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_74921FC1AD2F4065_METHOD_1_A718E71CD1048EE7_OFFSET))(a1, a2);
	}
};
