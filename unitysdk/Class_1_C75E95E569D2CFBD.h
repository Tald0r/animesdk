#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/Foundation/AssetLocation.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"

class Class_2_7FC98B52833961D9;
namespace MoleMole { class DownloadFileInfo; }
namespace MoleMole { class DownloadManifest; }
namespace MoleMole { class DownloadRevision; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C75E95E569D2CFBD_METHOD_1_2299EA6179E214D6_OFFSET UNITYSDK_OFFSET(0x9E7C8A0)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_40008ED3EF9D838A_OFFSET UNITYSDK_OFFSET(0x9E7C400)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_63DE7DFE4F11A05B_OFFSET UNITYSDK_OFFSET(0x9E7BF50)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_714D93AA32FC1703_OFFSET UNITYSDK_OFFSET(0x9E7C4C0)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_73EE9864E8A1D487_OFFSET UNITYSDK_OFFSET(0x9E7CA80)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_7635F4B692BFC796_OFFSET UNITYSDK_OFFSET(0x9E7BD30)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_8D61306C97E35DD8_OFFSET UNITYSDK_OFFSET(0x9E7C2B0)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_928F498B2BB4C2DA_OFFSET UNITYSDK_OFFSET(0x9E7BDD0)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_AFC1F9A45932B35F_OFFSET UNITYSDK_OFFSET(0x9E7CB10)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_BEAFBCFC9DF5FC93_OFFSET UNITYSDK_OFFSET(0x9E7BA50)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_D450AEAD37089609_OFFSET UNITYSDK_OFFSET(0x9E7C940)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_DE81415E21D8E601_OFFSET UNITYSDK_OFFSET(0x9E7BBD0)
#define CLASS_1_C75E95E569D2CFBD_METHOD_1_E6DCF614850072CD_OFFSET UNITYSDK_OFFSET(0x9E7C350)
#define CLASS_1_C75E95E569D2CFBD__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E7BA10)

inline static constexpr unsigned int Class_1_C75E95E569D2CFBD_TypeDefinitionIndex = 79478;

class Class_1_C75E95E569D2CFBD : public ::System::Object
{
public:
	static ::Enum_3_0A3761FE34514D6C* StaticGet_Field_1_2()
	{
		return (::Enum_3_0A3761FE34514D6C*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C75E95E569D2CFBD_TypeDefinitionIndex)->GetStaticField(0xFA30);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD__CCTOR_OFFSET))();
	}

	static ::System::Int64 Method_1_BEAFBCFC9DF5FC93(::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_BEAFBCFC9DF5FC93_OFFSET))(a1);
	}

	static ::System::String* Method_1_DE81415E21D8E601(::Foundation::ResourceFileType a1)
	{
		return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_DE81415E21D8E601_OFFSET))(a1);
	}

	static ::System::String* Method_1_928F498B2BB4C2DA(::Foundation::ResourceFileType a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::Foundation::ResourceFileType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_928F498B2BB4C2DA_OFFSET))(a1, a2);
	}

	static ::MoleMole::DownloadRevision* Method_1_63DE7DFE4F11A05B(::Foundation::ResourceFileType a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::MoleMole::DownloadRevision*(*)(::Foundation::ResourceFileType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_63DE7DFE4F11A05B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_8D61306C97E35DD8(::Foundation::AssetLocation a1, ::Enum_3_13E1F0BBFE52F5F0& a2)
	{
		return ((::System::Boolean(*)(::Foundation::AssetLocation, ::Enum_3_13E1F0BBFE52F5F0&))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_8D61306C97E35DD8_OFFSET))(a1, a2);
	}

	static ::MoleMole::DownloadManifest* Method_1_E6DCF614850072CD(::System::String* a1)
	{
		return ((::MoleMole::DownloadManifest*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_E6DCF614850072CD_OFFSET))(a1);
	}

	static ::Class_2_7FC98B52833961D9* Method_1_40008ED3EF9D838A(::System::String* a1)
	{
		return ((::Class_2_7FC98B52833961D9*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_40008ED3EF9D838A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_714D93AA32FC1703(::Foundation::ResourceFileType a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Boolean(*)(::Foundation::ResourceFileType, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_714D93AA32FC1703_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::String* Method_1_7635F4B692BFC796(::Foundation::ResourceFileType a1)
	{
		return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_7635F4B692BFC796_OFFSET))(a1);
	}

	static ::System::Void Method_1_2299EA6179E214D6(::MoleMole::DownloadManifest* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::MoleMole::DownloadManifest*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_2299EA6179E214D6_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_D450AEAD37089609(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_D450AEAD37089609_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_73EE9864E8A1D487(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_73EE9864E8A1D487_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AFC1F9A45932B35F(::System::String* a1, ::MoleMole::DownloadRevision* a2)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::DownloadRevision*))((::PBYTE)hIl2Cpp + CLASS_1_C75E95E569D2CFBD_METHOD_1_AFC1F9A45932B35F_OFFSET))(a1, a2);
	}
};
