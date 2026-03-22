#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace MoleMole::Config { class AssetIndexContainer; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_B6748CD119853962_METHOD_1_2021B859A2915C17_1_OFFSET UNITYSDK_OFFSET(0xB845CC0)
#define CLASS_1_B6748CD119853962_METHOD_1_2021B859A2915C17_OFFSET UNITYSDK_OFFSET(0xB845C50)
#define CLASS_1_B6748CD119853962_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0xB845960)
#define CLASS_1_B6748CD119853962_METHOD_1_2F003ADB717A419B_OFFSET UNITYSDK_OFFSET(0xB845D30)
#define CLASS_1_B6748CD119853962_METHOD_1_52E1E5341129B11A_OFFSET UNITYSDK_OFFSET(0xB846510)
#define CLASS_1_B6748CD119853962_METHOD_1_58023378DFBD6AD1_OFFSET UNITYSDK_OFFSET(0xB8461C0)
#define CLASS_1_B6748CD119853962_METHOD_1_70087F4B88D46C26_OFFSET UNITYSDK_OFFSET(0xB8458B0)
#define CLASS_1_B6748CD119853962_METHOD_1_80F5799A8D6AE3A4_OFFSET UNITYSDK_OFFSET(0xB8471E0)
#define CLASS_1_B6748CD119853962_METHOD_1_A8AB44356FA0B9C9_OFFSET UNITYSDK_OFFSET(0xB845FD0)
#define CLASS_1_B6748CD119853962_METHOD_1_C5C589F86141F751_OFFSET UNITYSDK_OFFSET(0xB846FC0)
#define CLASS_1_B6748CD119853962_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB847520)
#define CLASS_1_B6748CD119853962__CCTOR_OFFSET UNITYSDK_OFFSET(0xB847590)
#define CLASS_1_B6748CD119853962__CTOR_OFFSET UNITYSDK_OFFSET(0xB847580)

inline static constexpr unsigned int Class_1_B6748CD119853962_TypeDefinitionIndex = 74315;

class Class_1_B6748CD119853962 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6748CD119853962_TypeDefinitionIndex)->GetStaticField(0x35B80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>* Method_1_70087F4B88D46C26()
	{
		return ((::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_70087F4B88D46C26_OFFSET))(this);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Boolean Method_1_2021B859A2915C17(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_2021B859A2915C17_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8AB44356FA0B9C9(::Foundation::ResourceFileType a1, ::System::Boolean a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_A8AB44356FA0B9C9_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt64>* Method_1_80F5799A8D6AE3A4()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_80F5799A8D6AE3A4_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::Config::AssetIndexContainer*> Method_1_58023378DFBD6AD1(::Foundation::ResourceFileType a1, ::System::Boolean a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::Config::AssetIndexContainer*>(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_58023378DFBD6AD1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2021B859A2915C17_1(::System::Boolean& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_2021B859A2915C17_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2F003ADB717A419B(::System::Boolean a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_2F003ADB717A419B_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_52E1E5341129B11A(::MoleMole::Config::AssetIndexContainer*& a1, ::Foundation::ResourceFileType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::AssetIndexContainer*&, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_52E1E5341129B11A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C5C589F86141F751(::MoleMole::Config::AssetIndexContainer*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::AssetIndexContainer*&))((::PBYTE)hIl2Cpp + CLASS_1_B6748CD119853962_METHOD_1_C5C589F86141F751_OFFSET))(a1);
	}
};
