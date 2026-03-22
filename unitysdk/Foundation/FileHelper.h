#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ByteArray; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class FileInfo; }
namespace System::IO { class Stream; }

#define FOUNDATION_FILEHELPER_APPENDSTRINGTOFILE_OFFSET UNITYSDK_OFFSET(0x19406310)
#define FOUNDATION_FILEHELPER_ASSUREDIRECTORYEXISTS_OFFSET UNITYSDK_OFFSET(0x19405A90)
#define FOUNDATION_FILEHELPER_CALCULATEMD5_OFFSET UNITYSDK_OFFSET(0x19403520)
#define FOUNDATION_FILEHELPER_CHANGEDIRECTORYREADONLYFLAG_OFFSET UNITYSDK_OFFSET(0x19404250)
#define FOUNDATION_FILEHELPER_CHANGEFILEREADONLYACCESS_OFFSET UNITYSDK_OFFSET(0x19405CF0)
#define FOUNDATION_FILEHELPER_CHANGEREADONLYANDDELETEIFEXIST_OFFSET UNITYSDK_OFFSET(0x19405BA0)
#define FOUNDATION_FILEHELPER_CLEARFLODER_OFFSET UNITYSDK_OFFSET(0x194044C0)
#define FOUNDATION_FILEHELPER_COMBINEPATH_OFFSET UNITYSDK_OFFSET(0x19401730)
#define FOUNDATION_FILEHELPER_COMBINERELATEPATH_OFFSET UNITYSDK_OFFSET(0x19401830)
#define FOUNDATION_FILEHELPER_COPYDIRECTORY_OFFSET UNITYSDK_OFFSET(0x19402610)
#define FOUNDATION_FILEHELPER_COPYFILEIFEXIST_OFFSET UNITYSDK_OFFSET(0x19409290)
#define FOUNDATION_FILEHELPER_COPYFILE_OFFSET UNITYSDK_OFFSET(0x194023A0)
#define FOUNDATION_FILEHELPER_COPYFOLDER_OFFSET UNITYSDK_OFFSET(0x19405220)
#define FOUNDATION_FILEHELPER_CREATEDIRECTORYBYFILE_OFFSET UNITYSDK_OFFSET(0x194024C0)
#define FOUNDATION_FILEHELPER_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x19401A10)
#define FOUNDATION_FILEHELPER_DELETECREATENEWDIRECTORY_OFFSET UNITYSDK_OFFSET(0x19401AE0)
#define FOUNDATION_FILEHELPER_DELETEDIRALLFILES_OFFSET UNITYSDK_OFFSET(0x19402220)
#define FOUNDATION_FILEHELPER_DELETEFILESEXCEPT_OFFSET UNITYSDK_OFFSET(0x19403C90)
#define FOUNDATION_FILEHELPER_DELETEFILES_OFFSET UNITYSDK_OFFSET(0x19403A30)
#define FOUNDATION_FILEHELPER_DELETEFILE_OFFSET UNITYSDK_OFFSET(0x194021B0)
#define FOUNDATION_FILEHELPER_DELETEREADONLYDIR_OFFSET UNITYSDK_OFFSET(0x19401BD0)
#define FOUNDATION_FILEHELPER_ENSUREPARENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x194058D0)
#define FOUNDATION_FILEHELPER_FILECOPY_OFFSET UNITYSDK_OFFSET(0x194077F0)
#define FOUNDATION_FILEHELPER_FILEEXISTSWINDOWSLONGPATH_OFFSET UNITYSDK_OFFSET(0x194098E0)
#define FOUNDATION_FILEHELPER_FILEEXIST_OFFSET UNITYSDK_OFFSET(0x193F3B80)
#define FOUNDATION_FILEHELPER_FILENAMEAPPEND_OFFSET UNITYSDK_OFFSET(0x19402AE0)
#define FOUNDATION_FILEHELPER_FILEREADALLBYTES_OFFSET UNITYSDK_OFFSET(0x19402C90)
#define FOUNDATION_FILEHELPER_FILEREADALLTEXT_OFFSET UNITYSDK_OFFSET(0x19402BB0)
#define FOUNDATION_FILEHELPER_FILESTREAMCOPY_OFFSET UNITYSDK_OFFSET(0x194079A0)
#define FOUNDATION_FILEHELPER_FILEWRITEALLBYTES_OFFSET UNITYSDK_OFFSET(0x19402D70)
#define FOUNDATION_FILEHELPER_FILEWRITEALLLINES_OFFSET UNITYSDK_OFFSET(0x19402E00)
#define FOUNDATION_FILEHELPER_FILEWRITEALLTEXTS_OFFSET UNITYSDK_OFFSET(0x19402E90)
#define FOUNDATION_FILEHELPER_FILEWRITEALLTEXTTOBASE64_OFFSET UNITYSDK_OFFSET(0x19402F20)
#define FOUNDATION_FILEHELPER_FIXSLASHES_1_OFFSET UNITYSDK_OFFSET(0x19406090)
#define FOUNDATION_FILEHELPER_FIXSLASHES_OFFSET UNITYSDK_OFFSET(0x19405FF0)
#define FOUNDATION_FILEHELPER_FORMATFILEPATH_OFFSET UNITYSDK_OFFSET(0x194016B0)
#define FOUNDATION_FILEHELPER_FORMATSLASH_OFFSET UNITYSDK_OFFSET(0x19406280)
#define FOUNDATION_FILEHELPER_GETALLFILE_OFFSET UNITYSDK_OFFSET(0x194038C0)
#define FOUNDATION_FILEHELPER_GETCHILDRENRELATIVEPATHS_OFFSET UNITYSDK_OFFSET(0x194087E0)
#define FOUNDATION_FILEHELPER_GETFILECRC_OFFSET UNITYSDK_OFFSET(0x19404C30)
#define FOUNDATION_FILEHELPER_GETFILEMD5_OFFSET UNITYSDK_OFFSET(0x19404840)
#define FOUNDATION_FILEHELPER_GETFILEPREFIX_OFFSET UNITYSDK_OFFSET(0x19403E60)
#define FOUNDATION_FILEHELPER_GETFILESIZEFAST_OFFSET UNITYSDK_OFFSET(0x19405070)
#define FOUNDATION_FILEHELPER_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x19404DC0)
#define FOUNDATION_FILEHELPER_GETPATHWITHOUTEXTENSION_OFFSET UNITYSDK_OFFSET(0x19405F60)
#define FOUNDATION_FILEHELPER_GETPERSISTFOLDERSIZE_OFFSET UNITYSDK_OFFSET(0x19409B00)
#define FOUNDATION_FILEHELPER_GETRELATIVEASSETPATHFROMFULLPATH_OFFSET UNITYSDK_OFFSET(0x194085C0)
#define FOUNDATION_FILEHELPER_GETRELATIVEPATH_1_OFFSET UNITYSDK_OFFSET(0x19408A20)
#define FOUNDATION_FILEHELPER_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x19408CA0)
#define FOUNDATION_FILEHELPER_GETWINDOWNLONGPATH_OFFSET UNITYSDK_OFFSET(0x19408DC0)
#define FOUNDATION_FILEHELPER_GET_EDITORPROJECTDIR_OFFSET UNITYSDK_OFFSET(0x194015E0)
#define FOUNDATION_FILEHELPER_GET_FILECONFIGDEBUGPREFIX_OFFSET UNITYSDK_OFFSET(0x19400CB0)
#define FOUNDATION_FILEHELPER_ISFILEEXISTS_OFFSET UNITYSDK_OFFSET(0x193F3C60)
#define FOUNDATION_FILEHELPER_ISFILEOPENED_OFFSET UNITYSDK_OFFSET(0x19409580)
#define FOUNDATION_FILEHELPER_ISFILEPATHSTARTSFROMSTREAMINGASSETS_OFFSET UNITYSDK_OFFSET(0x19407750)
#define FOUNDATION_FILEHELPER_ISSKIPCHECKINSTREAMING_OFFSET UNITYSDK_OFFSET(0x19409090)
#define FOUNDATION_FILEHELPER_LOADDATAATFILECFGFOLDER_OFFSET UNITYSDK_OFFSET(0x19400CF0)
#define FOUNDATION_FILEHELPER_LOADTEXTBINARY_OFFSET UNITYSDK_OFFSET(0x194010A0)
#define FOUNDATION_FILEHELPER_LOADTEXTFILEFROMBINARYASYNC_OFFSET UNITYSDK_OFFSET(0x194011B0)
#define FOUNDATION_FILEHELPER_LOADTEXTFILEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19400E10)
#define FOUNDATION_FILEHELPER_LOADTEXTFILETOSTRING_OFFSET UNITYSDK_OFFSET(0x19401360)
#define FOUNDATION_FILEHELPER_MKDIR_OFFSET UNITYSDK_OFFSET(0x19403FD0)
#define FOUNDATION_FILEHELPER_MODIFYFILENAME_OFFSET UNITYSDK_OFFSET(0x194029E0)
#define FOUNDATION_FILEHELPER_MOVEFILEIFEXIST_OFFSET UNITYSDK_OFFSET(0x19409130)
#define FOUNDATION_FILEHELPER_OPENREAD_OFFSET UNITYSDK_OFFSET(0x19407F30)
#define FOUNDATION_FILEHELPER_READASSETLISTFROMFILE_OFFSET UNITYSDK_OFFSET(0x19406B10)
#define FOUNDATION_FILEHELPER_READFROMFILE_OFFSET UNITYSDK_OFFSET(0x19407FE0)
#define FOUNDATION_FILEHELPER_RECURSIVE_OFFSET UNITYSDK_OFFSET(0x194030F0)
#define FOUNDATION_FILEHELPER_REMOVEDIRECTORYIFEMPTY_OFFSET UNITYSDK_OFFSET(0x194093F0)
#define FOUNDATION_FILEHELPER_REMOVEEMPTYDIRECTORY_OFFSET UNITYSDK_OFFSET(0x19409490)
#define FOUNDATION_FILEHELPER_REMOVEFILEEXTENSION_1_OFFSET UNITYSDK_OFFSET(0x19409F80)
#define FOUNDATION_FILEHELPER_REMOVEFILEEXTENSION_OFFSET UNITYSDK_OFFSET(0x19409E40)
#define FOUNDATION_FILEHELPER_REPLACEFILENAME_OFFSET UNITYSDK_OFFSET(0x19409A00)
#define FOUNDATION_FILEHELPER_RMDIR_OFFSET UNITYSDK_OFFSET(0x19404140)
#define FOUNDATION_FILEHELPER_SPLITPATH_OFFSET UNITYSDK_OFFSET(0x19408E80)
#define FOUNDATION_FILEHELPER_UNZIPFILE_OFFSET UNITYSDK_OFFSET(0x19406EA0)
#define FOUNDATION_FILEHELPER_WRITETOFILE_OFFSET UNITYSDK_OFFSET(0x194067B0)
#define FOUNDATION_FILEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1940A0C0)

namespace Foundation
{
	inline static constexpr unsigned int FileHelper_TypeDefinitionIndex = 8007;

	class FileHelper : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_streamingDirRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FileHelper_TypeDefinitionIndex)->GetStaticField(0x6CA0);
		}
		// static const ::System::String* FileCfgPrefix; // 0x0
		// static const ::System::String* BytesSuffix; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER__CCTOR_OFFSET))();
		}

		static ::System::String* get_FileConfigDebugPrefix()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GET_FILECONFIGDEBUGPREFIX_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* LoadDataAtFileCfgFolder(::System::String* filename)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_LOADDATAATFILECFGFOLDER_OFFSET))(filename);
		}

		static ::Foundation::ByteArray* LoadTextBinary(::System::String* filePath)
		{
			return ((::Foundation::ByteArray*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_LOADTEXTBINARY_OFFSET))(filePath);
		}

		static ::System::Void LoadTextFileFromBinaryAsync(::Foundation::AssetPath filePath, ::System::Action_1<::Il2CppArray<::System::Byte>*>* callback, ::System::Boolean noError)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::System::Action_1<::Il2CppArray<::System::Byte>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_LOADTEXTFILEFROMBINARYASYNC_OFFSET))(filePath, callback, noError);
		}

		static ::Il2CppArray<::System::Byte>* LoadTextFileFromBinary(::Foundation::AssetPath filePath, ::System::Boolean noError)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_LOADTEXTFILEFROMBINARY_OFFSET))(filePath, noError);
		}

		static ::System::String* LoadTextFileToString(::System::String* filePath, ::System::Boolean noError)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_LOADTEXTFILETOSTRING_OFFSET))(filePath, noError);
		}

		static ::System::String* get_EditorProjectDir()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GET_EDITORPROJECTDIR_OFFSET))();
		}

		static ::System::String* FormatFilePath(::System::String* filePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FORMATFILEPATH_OFFSET))(filePath);
		}

		static ::System::String* CombinePath(::System::String* path1, ::System::String* path2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COMBINEPATH_OFFSET))(path1, path2);
		}

		static ::System::String* CombineRelatePath(::Il2CppArray<::System::String*>* dir)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COMBINERELATEPATH_OFFSET))(dir);
		}

		static ::System::Void CreateDirectory(::System::String* dir)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CREATEDIRECTORY_OFFSET))(dir);
		}

		static ::System::Void DeleteCreateNewDirectory(::System::String* dir)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETECREATENEWDIRECTORY_OFFSET))(dir);
		}

		static ::System::Void DeleteReadOnlyDir(::System::String* file)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETEREADONLYDIR_OFFSET))(file);
		}

		static ::System::Void DeleteFile(::System::String* filepath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETEFILE_OFFSET))(filepath);
		}

		static ::System::Void DeleteDirAllFiles(::System::String* dirPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETEDIRALLFILES_OFFSET))(dirPath);
		}

		static ::System::Boolean CopyFile(::System::String* sourcePath, ::System::String* targetPath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COPYFILE_OFFSET))(sourcePath, targetPath);
		}

		static ::System::Void CopyDirectory(::System::String* srcDir, ::System::String* tgtDir)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COPYDIRECTORY_OFFSET))(srcDir, tgtDir);
		}

		static ::System::Void CreateDirectoryByFile(::System::String* filepath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CREATEDIRECTORYBYFILE_OFFSET))(filepath);
		}

		static ::System::Void ModifyFileName(::System::String* srcFileName, ::System::String* desFileName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_MODIFYFILENAME_OFFSET))(srcFileName, desFileName);
		}

		static ::System::Boolean FileExist(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEEXIST_OFFSET))(filePath);
		}

		static ::System::String* FileNameAppend(::System::String* filename, ::System::String* nameChar)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILENAMEAPPEND_OFFSET))(filename, nameChar);
		}

		static ::System::String* FileReadAllText(::System::String* filepath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEREADALLTEXT_OFFSET))(filepath);
		}

		static ::Il2CppArray<::System::Byte>* FileReadAllBytes(::System::String* filepath)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEREADALLBYTES_OFFSET))(filepath);
		}

		static ::System::Void FileWriteAllBytes(::System::String* filepath, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEWRITEALLBYTES_OFFSET))(filepath, bytes);
		}

		static ::System::Void FileWriteAllLines(::System::String* filepath, ::Il2CppArray<::System::String*>* lines)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEWRITEALLLINES_OFFSET))(filepath, lines);
		}

		static ::System::Void FileWriteAllTexts(::System::String* filepath, ::System::String* text)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEWRITEALLTEXTS_OFFSET))(filepath, text);
		}

		static ::System::Void FileWriteAllTextToBase64(::System::String* filepath, ::System::String* text)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEWRITEALLTEXTTOBASE64_OFFSET))(filepath, text);
		}

		static ::System::Void Recursive(::System::String* path, ::System::Collections::Generic::List_1<::System::String*>* files, ::System::Collections::Generic::List_1<::System::String*>* paths)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_RECURSIVE_OFFSET))(path, files, paths);
		}

		static ::System::String* CalculateMD5(::System::String* filepath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CALCULATEMD5_OFFSET))(filepath);
		}

		static ::Il2CppArray<::System::IO::FileInfo*>* GetAllFile(::System::String* directory, ::System::String* fileSuffix)
		{
			return ((::Il2CppArray<::System::IO::FileInfo*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETALLFILE_OFFSET))(directory, fileSuffix);
		}

		static ::System::Void DeleteFiles(::System::String* directory, ::System::String* fileSuffix)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETEFILES_OFFSET))(directory, fileSuffix);
		}

		static ::System::Void DeleteFilesExcept(::System::String* directory, ::System::String* exceptFileSuffix)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_DELETEFILESEXCEPT_OFFSET))(directory, exceptFileSuffix);
		}

		static ::System::String* GetFilePrefix(::System::String* filename)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETFILEPREFIX_OFFSET))(filename);
		}

		static ::System::Void Mkdir(::System::String* path, ::System::Boolean isOverride)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_MKDIR_OFFSET))(path, isOverride);
		}

		static ::System::Void RmDir(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_RMDIR_OFFSET))(path);
		}

		static ::System::Void ChangeDirectoryReadOnlyFlag(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CHANGEDIRECTORYREADONLYFLAG_OFFSET))(path);
		}

		static ::System::Void ClearFloder(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CLEARFLODER_OFFSET))(path);
		}

		static ::System::String* GetFileMd5(::System::String* filePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETFILEMD5_OFFSET))(filePath);
		}

		static ::System::String* GetFileCRC(::System::String* filePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETFILECRC_OFFSET))(filePath);
		}

		static ::System::Int64 GetFileSize(::System::String* filePath)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETFILESIZE_OFFSET))(filePath);
		}

		static ::System::Int64 GetFileSizeFast(::System::String* filePath)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETFILESIZEFAST_OFFSET))(filePath);
		}

		static ::System::Void CopyFolder(::System::String* srcPath, ::System::String* destPath, ::System::Boolean containMeta)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COPYFOLDER_OFFSET))(srcPath, destPath, containMeta);
		}

		static ::System::Void EnsureParentDirectory(::System::String* path, ::System::Boolean inputIsDir)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ENSUREPARENTDIRECTORY_OFFSET))(path, inputIsDir);
		}

		static ::System::Void AssureDirectoryExists(::System::String* directoryPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ASSUREDIRECTORYEXISTS_OFFSET))(directoryPath);
		}

		static ::System::Boolean ChangeReadOnlyAndDeleteIfExist(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CHANGEREADONLYANDDELETEIFEXIST_OFFSET))(filePath);
		}

		static ::System::Void ChangeFileReadOnlyAccess(::System::String* filePath, ::System::Boolean isReadOnly)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_CHANGEFILEREADONLYACCESS_OFFSET))(filePath, isReadOnly);
		}

		static ::System::String* GetPathWithoutExtension(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETPATHWITHOUTEXTENSION_OFFSET))(path);
		}

		static ::System::Void FixSlashes(::System::String*& path)
		{
			return ((::System::Void(*)(::System::String*&))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FIXSLASHES_OFFSET))(path);
		}

		static ::System::Void FixSlashes_1(::System::String*& path, ::System::Char separatorChar, ::System::Char badChar, ::System::Boolean addTrailingSlash)
		{
			return ((::System::Void(*)(::System::String*&, ::System::Char, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FIXSLASHES_1_OFFSET))(path, separatorChar, badChar, addTrailingSlash);
		}

		static ::System::String* FormatSlash(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FORMATSLASH_OFFSET))(path);
		}

		static ::System::Void AppendStringToFile(::System::String* path, ::System::String* content, ::System::Boolean newLine)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_APPENDSTRINGTOFILE_OFFSET))(path, content, newLine);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* ReadAssetListFromFile(::System::String* filePath)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_READASSETLISTFROMFILE_OFFSET))(filePath);
		}

		static ::System::Void UnzipFile(::System::String* filePath, ::System::String* outputFolder)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_UNZIPFILE_OFFSET))(filePath, outputFolder);
		}

		static ::System::Boolean IsFileExists(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ISFILEEXISTS_OFFSET))(filePath);
		}

		static ::System::Boolean IsFilePathStartsFromStreamingAssets(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ISFILEPATHSTARTSFROMSTREAMINGASSETS_OFFSET))(filePath);
		}

		static ::System::Boolean FileCopy(::System::String* src, ::System::String* dst)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILECOPY_OFFSET))(src, dst);
		}

		static ::System::Boolean FileStreamCopy(::System::String* src, ::System::String* dst)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILESTREAMCOPY_OFFSET))(src, dst);
		}

		static ::System::IO::Stream* OpenRead(::System::String* filePath)
		{
			return ((::System::IO::Stream*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_OPENREAD_OFFSET))(filePath);
		}

		static ::System::String* ReadFromFile(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_READFROMFILE_OFFSET))(path);
		}

		static ::System::Void WriteToFile(::System::String* path, ::System::String* content)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_WRITETOFILE_OFFSET))(path, content);
		}

		static ::System::String* GetRelativeAssetPathFromFullPath(::System::String* fullPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETRELATIVEASSETPATHFROMFULLPATH_OFFSET))(fullPath);
		}

		static ::Il2CppArray<::System::String*>* GetChildrenRelativePaths(::System::String* path, ::System::String* searchPattern)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETCHILDRENRELATIVEPATHS_OFFSET))(path, searchPattern);
		}

		static ::System::String* GetRelativePath(::System::IO::FileInfo* fi, ::System::String* rootPath)
		{
			return ((::System::String*(*)(::System::IO::FileInfo*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETRELATIVEPATH_OFFSET))(fi, rootPath);
		}

		static ::System::String* GetRelativePath_1(::System::String* path, ::System::String* relativeTo)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETRELATIVEPATH_1_OFFSET))(path, relativeTo);
		}

		static ::System::String* GetWindownLongPath(::System::String* filepath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETWINDOWNLONGPATH_OFFSET))(filepath);
		}

		static ::Il2CppArray<::System::String*>* SplitPath(::System::String* path, ::System::String* rootpath)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_SPLITPATH_OFFSET))(path, rootpath);
		}

		static ::System::Boolean IsSkipCheckInStreaming()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ISSKIPCHECKINSTREAMING_OFFSET))();
		}

		static ::System::String* MoveFileIfExist(::System::String* srcPath, ::System::String* dstPath)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_MOVEFILEIFEXIST_OFFSET))(srcPath, dstPath);
		}

		static ::System::String* CopyFileIfExist(::System::String* srcPath, ::System::String* dstPath)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_COPYFILEIFEXIST_OFFSET))(srcPath, dstPath);
		}

		static ::System::Void RemoveDirectoryIfEmpty(::System::String* directory)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_REMOVEDIRECTORYIFEMPTY_OFFSET))(directory);
		}

		static ::System::Void RemoveEmptyDirectory(::System::String* startPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_REMOVEEMPTYDIRECTORY_OFFSET))(startPath);
		}

		static ::System::Boolean IsFileOpened(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_ISFILEOPENED_OFFSET))(filePath);
		}

		static ::System::Boolean FileExistsWindowsLongPath(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_FILEEXISTSWINDOWSLONGPATH_OFFSET))(path);
		}

		static ::System::String* ReplaceFileName(::System::String* path, ::System::String* newFileName)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_REPLACEFILENAME_OFFSET))(path, newFileName);
		}

		static ::System::Int64 GetPersistFolderSize(::System::String* folderPath)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_GETPERSISTFOLDERSIZE_OFFSET))(folderPath);
		}

		static ::System::String* RemoveFileExtension(::System::String* filePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_REMOVEFILEEXTENSION_OFFSET))(filePath);
		}

		static ::System::String* RemoveFileExtension_1(::System::String* filePath, ::System::Boolean formatSlash)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER_REMOVEFILEEXTENSION_1_OFFSET))(filePath, formatSlash);
		}
	};
}
