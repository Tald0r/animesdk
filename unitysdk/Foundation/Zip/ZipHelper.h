#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip { class ZipOutputStream; }
namespace System { class String; }

#define FOUNDATION_ZIP_ZIPHELPER_UNZIP_1_OFFSET UNITYSDK_OFFSET(0x1AEE5C80)
#define FOUNDATION_ZIP_ZIPHELPER_UNZIP_OFFSET UNITYSDK_OFFSET(0x1AEE5510)
#define FOUNDATION_ZIP_ZIPHELPER_ZIPDIRECTORY_1_OFFSET UNITYSDK_OFFSET(0x1AEE4780)
#define FOUNDATION_ZIP_ZIPHELPER_ZIPDIRECTORY_2_OFFSET UNITYSDK_OFFSET(0x1AEE49E0)
#define FOUNDATION_ZIP_ZIPHELPER_ZIPDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1AEE3E00)
#define FOUNDATION_ZIP_ZIPHELPER_ZIPFILE_1_OFFSET UNITYSDK_OFFSET(0x1AEE51B0)
#define FOUNDATION_ZIP_ZIPHELPER_ZIPFILE_OFFSET UNITYSDK_OFFSET(0x1AEE4A90)
#define FOUNDATION_ZIP_ZIPHELPER_ZIP_1_OFFSET UNITYSDK_OFFSET(0x1AEE5460)
#define FOUNDATION_ZIP_ZIPHELPER_ZIP_OFFSET UNITYSDK_OFFSET(0x1AEE5260)
#define FOUNDATION_ZIP_ZIPHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEE5D40)
#define FOUNDATION_ZIP_ZIPHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEE5D30)

namespace Foundation::Zip
{
	inline static constexpr unsigned int ZipHelper_TypeDefinitionIndex = 7719;

	class ZipHelper : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__7zExeUrl()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ZipHelper_TypeDefinitionIndex)->GetStaticField(0x7320);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ZIP_ZIPHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ZIP_ZIPHELPER__CCTOR_OFFSET))();
		}

		static ::System::Boolean ZipDirectory(::System::String* folderToZip, ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream* zipStream, ::System::String* parentFolderName)
		{
			return ((::System::Boolean(*)(::System::String*, ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ZIP_ZIPHELPER_ZIPDIRECTORY_OFFSET))(folderToZip, zipStream, parentFolderName);
		}

		static ::System::Boolean ZipDirectory_1(::System::String* folderToZip, ::System::String* zipedFile, ::System::String* password)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ZIP_ZIPHELPER_ZIPDIRECTORY_1_OFFSET))(folderToZip, zipedFile, password);
		}

		static ::System::Boolean ZipDirectory_2(::System::String* folderToZip, ::System::String* zipedFile)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ZIP_ZIPHELPER_ZIPDIRECTORY_2_OFFSET))(folderToZip, zipedFile);
		}

		static ::System::Boolean ZipFile(::System::String* fileToZip, ::System::String* zipedFile, ::System::String* password)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ZIP_ZIPHELPER_ZIPFILE_OFFSET))(fileToZip, zipedFile, password);
		}

		static ::System::Boolean ZipFile_1(::System::String* fileToZip, ::System::String* zipedFile)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ZIP_ZIPHELPER_ZIPFILE_1_OFFSET))(fileToZip, zipedFile);
		}

		static ::System::Boolean Zip(::System::String* fileToZip, ::System::String* zipedFile, ::System::String* password)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ZIP_ZIPHELPER_ZIP_OFFSET))(fileToZip, zipedFile, password);
		}

		static ::System::Boolean Zip_1(::System::String* fileToZip, ::System::String* zipedFile)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ZIP_ZIPHELPER_ZIP_1_OFFSET))(fileToZip, zipedFile);
		}

		static ::System::Boolean UnZip(::System::String* fileToUnZip, ::System::String* zipedFolder, ::System::String* password)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ZIP_ZIPHELPER_UNZIP_OFFSET))(fileToUnZip, zipedFolder, password);
		}

		static ::System::Boolean UnZip_1(::System::String* fileToUnZip, ::System::String* zipedFolder)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ZIP_ZIPHELPER_UNZIP_1_OFFSET))(fileToUnZip, zipedFolder);
		}
	};
}
